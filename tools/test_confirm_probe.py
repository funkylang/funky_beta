#!/usr/bin/env python3
"""
fllama.c MTP draft-confirmation probe (exploratory, short-lived).

Question answered: for which prompts does the main head confirm any of the
MTP drafts? The turn protocol only sends lookahead messages for confirmed
drafts, so a prompt with 0 confirmations exercises the empty case.

Runtime bounded: SETUP_TIMEOUT for model load/tokenize (cold start),
PROBE_TIMEOUT per prompt for messages. Prints all wire traffic live
(flushed): "-> msg" / "<- response", truncated past 83 chars to
first 60 + "..." + last 20.
Server: tools/run_fllama_test.sh (--mtp 3 --eager).
"""

import socket
import time

LOG = "/tmp/fllama_test_server.log"
MODEL = "Qwen3.5-2B-Q4_K_M.gguf"
SETUP_TIMEOUT = 30.0   # model load + tokenize (warm: <1s)
PROBE_TIMEOUT = 6.0    # per prompt: collect messages until quiet or this
PROMPTS = [
    "The capital of France is",
    "Once upon a time",
    "Paris is famous for",
]


def say(msg):
    print(msg, flush=True)


def show_wire(msg, incoming=False):
    """Print one wire message: '<- ' or '-> ' prefix, truncated display."""
    arrow = "<-" if incoming else "->"
    if len(msg) > 83:
        display = msg[:60] + "..." + msg[-20:]
    else:
        display = msg
    say(f"{arrow} {display}")


def truncate_log():
    with open(LOG, "a+") as fh:
        fh.seek(0)
        fh.truncate()
        fh.write("\n" * 64)


def tail_lines():
    with open(LOG, "rb") as fh:
        return fh.read().replace(b"\x00", b" ").decode(errors="replace").splitlines()


class Fllama:
    def __init__(self):
        self.sock = socket.create_connection(("127.0.0.1", 7683), timeout=5)

    def send(self, cmd):
        show_wire(cmd, incoming=False)
        self.sock.sendall(cmd.encode() + b"\x00")

    def read(self, timeout):
        self.sock.settimeout(timeout)
        buf = b""
        while True:
            try:
                chunk = self.sock.recv(65536)
            except socket.timeout:
                if not buf:
                    return None
                idx = buf.find(b"\x00")
                msg = buf[:idx].decode() if idx != -1 else None
                if msg is not None:
                    show_wire(msg, incoming=True)
                return msg
            if not chunk:
                return None
            buf += chunk
            if b"\x00" in buf:
                msg = buf[:buf.find(b"\x00")].decode()
                show_wire(msg, incoming=True)
                return msg

    def close(self):
        self.sock.close()


def probe(prompt, model=MODEL):
    say(f"[probe] {prompt!r}")
    truncate_log()
    f = Fllama()
    # use_model is SILENT on success: batch it with tokenize and treat the
    # first reply as error-or-tokenize-result (SETUP_TIMEOUT covers cold load)
    f.send(f"use_model {model}")
    f.send(f"tokenize {prompt}")
    r = f.read(SETUP_TIMEOUT)
    if not (r and r.startswith("tokens ")):
        say(f"  SETUP ERROR: {r!r}")
        f.close()
        return None
    tokens = [int(t) for t in r.split()[2:]]
    sid = int(time.time()) % 99999
    f.send(f"create_sequence {sid}")
    f.read(3)
    f.send(f"add_tokens {sid} {len(tokens)} " + " ".join(map(str, tokens)))
    f.send(f"evaluate {sid}")

    kinds = []
    deadline = time.time() + PROBE_TIMEOUT
    while time.time() < deadline:
        r = f.read(1.0)
        if not r:
            continue
        parts = r.split()
        if parts[0] in ("logits", "lookahead"):
            kinds.append(parts[0])
    f.close()

    log = tail_lines()
    gen = [l for l in reversed(log) if "generating 3 draft" in l]
    conf = [l for l in reversed(log) if "confirmation" in l]
    return kinds, (gen[0].strip()[:110] if gen else None), \
        (conf[0].strip()[:120] if conf else None)


def main():
    say(f"fllama MTP draft-confirmation probe ({len(PROMPTS)} prompts)")
    results = []
    for prompt in PROMPTS:
        res = probe(prompt)
        if not res:
            continue
        kinds, gen, conf = res
        n_la = kinds.count("lookahead")
        results.append((prompt, n_la))
        say(f"  result: messages {kinds} (lookaheads={n_la})")
        if gen:
            say(f"     {gen}")
        if conf:
            say(f"     {conf}")
        say("")
    say("summary:")
    for prompt, n_la in results:
        say(f"  {prompt!r}: {n_la} lookahead message(s)")


if __name__ == "__main__":
    main()
