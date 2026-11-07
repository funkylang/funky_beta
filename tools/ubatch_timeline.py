#!/usr/bin/env python3
"""Compute ubatch timeline from a fllama server log (LLAMA_UBATCH_TRACE).

Rows come from main-context [UBATCH-STAGE] lines (printed at the END of each
process_ubatch). The duration on each row is the wall time until the next
main-context event (next STAGE line or ===== round marker), so every millisecond
is accounted for; mtp work and idle time show up inside those durations.

Layout: one block per round
  setup      <ms>                   (first TRACE -> STAGE of this round)
  batch N   <ms>  (<n> tokens)      (one row per ubatch, N starts at 0)
  ────────────────────────────────── (thin separator)
  round N   <ms>  (<n> tokens)      (round totals = setup + batches)

Requires a build with the UBATCH-STAGE instrumentation (llama.cpp 4202de100+).
"""
import re
import sys

RE_TRACE = re.compile(r'^(\d+:\d+:\d+\.\d+) \[UBATCH-TRACE\] (\w+) seq=(\d+) tokens=(\d+)')
RE_STAGE = re.compile(
    r'^(\d+:\d+:\d+\.\d+) \[UBATCH-STAGE\] (\w+) seq=(\d+) tokens=(\d+)'
    r' apply=([\d.]+)ms build=([\d.]+)ms alloc=([\d.]+)ms inputs=([\d.]+)ms launch=([\d.]+)ms')
RE_ROUND = re.compile(r'^(\d+:\d+:\d+\.\d+) ===== (\d+) =====(.*)$')

SEP = '─' * 40  # thin horizontal separator (box-drawing character)


def to_sec(ts):
    h, m, s = ts.split(':')
    return int(h) * 3600 + int(m) * 60 + float(s)


def parse_log(path):
    stage, rounds = [], []
    trace_ts = {}  # seq -> process_ubatch start time (main context)
    with open(path) as f:
        for line in f:
            m = RE_STAGE.match(line)
            if m and m.group(2) == 'main':
                stage.append((to_sec(m.group(1)), int(m.group(3)), int(m.group(4))))
                continue
            m = RE_TRACE.match(line)
            if m and m.group(2) == 'main':
                trace_ts[int(m.group(3))] = to_sec(m.group(1))
                continue
            m = RE_ROUND.match(line)
            if m:
                rounds.append((to_sec(m.group(1)), int(m.group(2))))

    events = []
    for i, (ts, seq, tokens) in enumerate(stage):
        events.append({'ts': ts, 'kind': 'ubatch', 'idx': i})
    for i, (rt, rn) in enumerate(rounds):
        events.append({'ts': rt, 'kind': 'round', 'idx': i})
    events.sort(key=lambda e: e['ts'])
    return stage, rounds, events, trace_ts


def print_timeline(logfile):
    stage, rounds, events, trace_ts = parse_log(logfile)

    if not stage:
        print(f"Error: no [UBATCH-STAGE] lines found in '{logfile}'")
        print("Run the server with LLAMA_UBATCH_TRACE=1 on a build that has the")
        print("UBATCH-STAGE instrumentation (llama.cpp 4202de100+).")
        sys.exit(1)

    start_time = min(e['ts'] for e in events)

    # next event after each, for duration computation
    nxt = [None] * len(events)
    for i in range(len(events) - 2, -1, -1):
        nxt[i] = events[i + 1]

    # group ubatch durations/tokens by round; record this round's first
    # TRACE->STAGE as its setup. A ubatch belongs to the (n+1)th round seen.
    groups = {}          # rn -> {'rows': [(dur, tokens)], 'tokens_total': int, 'setup': float|None}
    round_seen = 0       # number of round markers encountered so far
    first_in_round = True

    for i, ev in enumerate(events):
        if ev['kind'] == 'round':
            round_seen += 1
            first_in_round = True
            continue
        current_round = round_seen + 1
        ts, seq, tokens = stage[ev['idx']]
        ne = nxt[i]
        dur = (ne['ts'] - ts) * 1000 if ne else 0.0

        g = groups.setdefault(current_round, {'rows': [], 'tokens_total': 0, 'setup': None})
        if first_in_round:
            t0 = trace_ts.get(seq)
            if t0 is not None:
                g['setup'] = (ts - t0) * 1000
            first_in_round = False

        g['rows'].append((dur, tokens))
        g['tokens_total'] += tokens

    # round total: simple sum of setup + batches for the round (adds up by construction)
    round_sum_ms = {
        rn: ((g['setup'] or 0.0) + sum(d for d, _t in g['rows']))
        for rn, g in groups.items()
    }

    # column widths (labels left-aligned in a fixed 8-char field;
    # 5+ digit durations handled dynamically by dur_width)
    label_width = max(
        len('setup'),
        max((len(str(rn)) + len('round ') for rn in groups), default=3),
        max((len('batch ') + len(str(len(g['rows']) - 1))
             for g in groups.values() if g['rows']), default=len('batch ')))
    all_durs = [d for g in groups.values() for (d, _t) in g['rows']]
    all_durs += [g['setup'] for g in groups.values() if g['setup'] is not None]
    all_durs += list(round_sum_ms.values())
    dur_width = max(len(f"{v:.0f}") for v in all_durs)
    tok_width = max(
        [len(str(t)) for g in groups.values() for (_d, t) in g['rows']]
        + [len(str(g['tokens_total'])) for g in groups.values()])

    banner = '=' * 80
    print()
    print(banner)
    print(f"UBATCH TIMELINE - {logfile}")
    print(banner)
    print()
    for rt, rn in rounds:
        g = groups.get(rn)
        if not g:
            continue
        if g['setup'] is not None:
            print(f"{'setup':<{label_width}s} {g['setup']:>{dur_width}.0f} ms")
        for ridx, (dur, tokens) in enumerate(g['rows']):
            print(f"{'batch ' + str(ridx):<{label_width}s} {dur:>{dur_width}.0f} ms "
                  f"({tokens:>{tok_width}d} tokens)")
        print(SEP)
        rt_ms = round_sum_ms[rn]
        print(f"{'round ' + str(rn):<{label_width}s} {rt_ms:>{dur_width}.0f} ms "
              f"({g['tokens_total']:>{tok_width}d} tokens)")
        print()


if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("Usage: ubatch_timeline.py <logfile>")
        sys.exit(1)

    logfile = sys.argv[1]
    try:
        print_timeline(logfile)
    except FileNotFoundError:
        print(f"Error: File '{logfile}' not found")
        sys.exit(1)
