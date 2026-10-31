#!/usr/bin/env python3
"""
fllama.c TCP test client.

Drives the fllama server (port 7683) over its raw null-terminated TCP protocol.

PROTOCOL QUIRK: setup commands are SILENT on success and only send
"error ..." on failure:
    use_model / create_sequence / add_tokens  -> no reply when they succeed
These always respond:
    tokenize <text>   -> "tokens N t1 t2 ..."
    evaluate <seq>    -> "logits <seq_id> <pos> 10 t=l ... (top 10)"

Lookahead design (from fllama.c + user):
    - Lookahead pre-decode PIGGYBACKS on an existing evaluation pass only;
      it never starts a dedicated batch (better wait ~1-2ms for the client
      than burn tens of ms on a token that may not be wanted).
    - So to trigger it deterministically: two sequences. Evaluate seq A,
      then evaluate seq B — that pass also pre-decodes A's top-1 token
      (server log: "evaluating lookahead token in server sequence ...").
    - Claim: client returns exactly next_token -> fast path "using lookahead".
    - Reject: any other token -> rollback of the partial KV checkpoint + re-decode.

Test flow:
  T1 baseline        evaluate seq1 alone (no lookahead possible)
  T2 pre-decode      evaluate seq2 -> seq1's lookahead gets pre-decoded
  T3 claim           add top-1 to seq1 -> "using lookahead" fast path
  T4 re-predecode    add token to seq2 + evaluate -> seq1 lookahead again
  T5 reject          add WRONG token to seq1 -> rollback + re-evaluate
  T6 correctness     fresh seq3 with same tokens must give identical logits
"""

import socket
import sys
import time


class Fllama:
    def __init__(self, host="127.0.0.1", port=7683):
        self.sock = socket.create_connection((host, port))

    def send(self, cmd):
        self.sock.sendall(cmd.encode() + b"\x00")

    def read(self, timeout):
        """Read one null-terminated message; return str, or None on timeout."""
        self.sock.settimeout(timeout)
        buf = b""
        while True:
            try:
                chunk = self.sock.recv(65536)
            except socket.timeout:
                if not buf:
                    return None
                continue
            if not chunk:
                raise ConnectionError("server closed connection")
            buf += chunk
            idx = buf.find(b"\x00")
            if idx != -1:
                return buf[:idx].decode()

    def cmd_silent(self, cmd, timeout=2.0):
        """Silent-on-success command: None when ok, else the error string."""
        self.send(cmd)
        return self.read(timeout)

    def tokenize(self, text):
        self.send(f"tokenize {text}")
        r = self.read(30)
        if r is None or not r.startswith("tokens "):
            raise RuntimeError(f"tokenize failed: {r!r}")
        return [int(t) for t in r.split()[2:]]

    def new_sequence(self, seq_id, tokens):
        err = self.cmd_silent(f"create_sequence {seq_id}")
        if err:
            raise RuntimeError(f"create_sequence failed: {err}")
        if tokens:
            err = self.cmd_silent(
                f"add_tokens {seq_id} {len(tokens)} " + " ".join(map(str, tokens)))
            if err:
                raise RuntimeError(f"add_tokens failed: {err}")

    def evaluate(self, seq_id, timeout=120):
        self.send(f"evaluate {seq_id}")
        r = self.read(timeout)
        if r is None or not r.startswith("logits "):
            raise RuntimeError(f"evaluate failed: {r!r}")
        parts = r.split()
        pos = int(parts[2])
        conf = {}
        for item in parts[4:]:
            tok, logit = item.split("=")
            conf[int(tok)] = float(logit)
        return pos, conf


def top1(conf):
    return max(conf, key=conf.get)


def main():
    f = Fllama()

    # use_model is silent on success; tokenize always replies. First wire
    # message after sending both is either an error or the tokenize result.
    prompt1 = "What is 2+2?"
    prompt2 = "The sky is"
    f.send("use_model Qwen3.5-2B-Q4_K_M.gguf")
    f.send(f"tokenize {prompt1}")
    t0 = time.time()
    r = f.read(180)  # allow slow CPU model load
    if r is None or r.startswith("error") or not r.startswith("tokens "):
        print(f"ERROR: model/tokenize: {r!r}")
        return 1
    tok1 = [int(t) for t in r.split()[2:]]
    t_load = time.time() - t0

    # T1: baseline — evaluate seq1 alone
    f.new_sequence(1, tok1)
    pos, conf = f.evaluate(1)
    t1_top = top1(conf)
    print(f"T1 baseline   : {t_load:.2f}s load+tok; eval ok; "
          f"pos={pos} top-1={t1_top}")

    # T2: evaluate seq2 -> this pass pre-decodes seq1's lookahead (top-1)
    tok2 = f.tokenize(prompt2)
    f.new_sequence(2, tok2)
    pos, conf2 = f.evaluate(2)
    t2_top = top1(conf2)
    print(f"T2 predecode  : seq2 eval ok; pos={pos} top-1={t2_top}; "
          f"(expect 'evaluating lookahead token in server sequence 0' in log)")

    # T3: claim — add exactly seq1's predicted token -> fast path
    err = f.cmd_silent(f"add_tokens 1 1 {t1_top}")
    if err:
        print(f"ERROR: {err}"); return 1
    pos, conf = f.evaluate(1)
    t3_top = top1(conf)
    print(f"T3 claim      : pos={pos} (expect {len(tok1)}) "
          f"top-1={t3_top}; (expect 'using lookahead' in log)")
    assert pos == len(tok1), f"claim position wrong: {pos}"

    # T4: get seq1 into lookahead state again via another piggyback pass
    more2 = f.tokenize(" blue.")
    err = f.cmd_silent(
        f"add_tokens 2 {len(more2)} " + " ".join(map(str, more2)))
    if err:
        print(f"ERROR: {err}"); return 1
    pos, conf2 = f.evaluate(2)
    t4_top = top1(conf2)
    print(f"T4 re-predecode: seq2 eval ok; pos={pos} top-1={t4_top}")

    # T5: reject — add a token that is NOT seq1's prediction -> rollback
    wrong = (t3_top + 1) % 100000  # almost certainly not the predicted token
    err = f.cmd_silent(f"add_tokens 1 1 {wrong}")
    if err:
        print(f"ERROR: {err}"); return 1
    pos, conf = f.evaluate(1)
    t5_top = top1(conf)
    expected_pos = len(tok1) + 1  # index of the rejected (3rd added) token
    print(f"T5 reject     : pos={pos} (expect {expected_pos}) "
          f"top-1={t5_top}; (expect 'do not use lookahead' + 'rolling back' in log)")
    assert pos == expected_pos, f"reject position wrong: {pos}"

    # T6: correctness — fresh sequence with identical tokens must give the
    # same result as seq1 after rollback. llama.cpp is float-nondeterministic
    # across batch shapes, so compare top-1 winner + max logit delta instead
    # of exact equality (broken state shows large deltas / wrong winner).
    f.new_sequence(3, tok1 + [t1_top, wrong])
    pos3, conf3 = f.evaluate(3)
    t6_top = top1(conf3)
    common = set(conf) & set(conf3)
    max_delta = max(abs(conf[t] - conf3[t]) for t in common) if common else 999.0
    ok = (t6_top == t5_top) and max_delta < 0.5
    print(f"T6 correctness: top-1 match={t6_top == t5_top} "
          f"(rollback={t5_top}, fresh={t6_top}); max logit delta={max_delta:.4f} -> {ok}")
    assert pos3 == expected_pos, f"control position wrong: {pos3}"
    assert ok, "rollback correctness check failed"

    print("\nAll lookahead tests complete.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
