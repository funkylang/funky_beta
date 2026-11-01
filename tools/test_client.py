#!/usr/bin/env python3
"""
fllama.c TCP test client (minimal: single sequence, single evaluation).

Drives the fllama server (port 7683) over its raw null-terminated TCP protocol.

PROTOCOL QUIRK: setup commands are SILENT on success and only send
"error ..." on failure:
    use_model / create_sequence / add_tokens  -> no reply when they succeed
These always respond:
    tokenize <text>   -> "tokens N t1 t2 ..."
    evaluate <seq>    -> "logits <seq_id> <pos> 10 t=l ... (top 10)"

pos semantics: zero based; the index of the NEXT token, i.e. the number of
tokens currently in the sequence.

Multi-sequence / lookahead claim-reject flow is tested separately once this
works.
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

    def tokenize(self, text, timeout=30):
        self.send(f"tokenize {text}")
        r = self.read(timeout)
        if r is None or not r.startswith("tokens "):
            raise RuntimeError(f"tokenize failed: {r!r}")
        print(f"WIRE<- {r}")
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
        print(f"WIRE<- {r}")
        parts = r.split()
        pos = int(parts[2])
        conf = {}
        for item in parts[4:]:
            tok, logit = item.split("=")
            conf[int(tok)] = float(logit)
        return pos, conf


def main():
    f = Fllama()

    # use_model is silent on success; tokenize always replies. First wire
    # message after sending both is either an error or the tokenize result.
    prompt = "What is 2+2?"
    f.send("use_model Qwen3.5-2B-Q4_K_M.gguf")
    f.send(f"tokenize {prompt}")
    t0 = time.time()
    r = f.read(180)  # allow slow CPU model load
    if r is None or r.startswith("error") or not r.startswith("tokens "):
        print(f"ERROR: model/tokenize: {r!r}")
        return 1
    print(f"WIRE<- {r}")
    tokens = [int(t) for t in r.split()[2:]]
    print(f"tokenize '{prompt}': {tokens}")

    f.new_sequence(1, tokens)
    pos, conf = f.evaluate(1)
    top = max(conf, key=conf.get)
    print(f"eval ok: pos={pos} top-1={top}; "
          f"{time.time() - t0:.2f}s total (incl. model load)")
    assert pos == len(tokens), \
        f"position wrong: {pos} (expected {len(tokens)})"

    # eager mode: the server verifies the pending lookahead right away and
    # sends further messages for this sequence; read them while they flow
    quiet_reads = 0
    while quiet_reads < 2:
        r = f.read(5.0)
        if r is None:
            quiet_reads += 1
            continue
        quiet_reads = 0
        print(f"WIRE<- {r}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
