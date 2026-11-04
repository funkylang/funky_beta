#!/usr/bin/env python3
"""Test speculation with a slow client (>100ms delay between confirmations)

Usage: python3 test_slow_client.py <prompt>
The server should show "evaluating N lookahead token(s)" in its log, proving
the speculative path runs when the client is slow enough.
"""
import sys
import time
from fllama_client import Fllama, setup

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <prompt>")
        sys.exit(1)

    prompt = sys.argv[1]
    server_host = 'localhost'
    server_port = 7683

    print(f"Connecting to fllama server at {server_host}:{server_port}")
    client = Fllama(server_host, server_port)

    # Setup: use model, get pieces (module-level function)
    prompt_tokens = setup(client)
    print(f"Model loaded, test prompt has {len(prompt_tokens)} tokens")

    # Tokenize our actual prompt
    client.send(f"tokenize {prompt}")
    r = client.read(5)
    assert r and r.startswith("tokens "), f"tokenize: {r!r}"
    tokens = [int(t) for t in r.split()[2:]]
    print(f"Prompt '{prompt}' -> {len(tokens)} tokens: {tokens[:5]}...")

    # Create sequence
    seq_id = 1
    client.send(f"create_sequence {seq_id}")
    print(f"Created sequence {seq_id}")

    # Add prompt and evaluate
    client.add(seq_id, tokens)
    client.send(f"evaluate {seq_id}")

    # READ LOGITS MESSAGE (first token after prompt)
    msg = client.read_next(seq_id, timeout=2)
    pos, conf = Fllama.top10(msg)
    next_token = max(conf, key=conf.get)
    print(f"Got logits@{pos}: next_token={next_token}")

    # SLOW CLIENT BEHAVIOR: wait before confirming
    print("Waiting 500ms before confirming (simulating slow client)...")
    time.sleep(0.5)

    # Now confirm the token and evaluate again
    client.add(seq_id, [next_token])
    client.send(f"evaluate {seq_id}")

    # Read what comes back - should see lookahead messages if speculation ran
    messages = []
    while True:
        try:
            msg = client.read_next(seq_id, timeout=0.5)
            pos, conf = Fllama.top10(msg)
            kind = msg.split()[0]
            top_token = max(conf, key=conf.get)
            print(f"Got {kind}@{pos}: top_token={top_token}")
            messages.append((kind, pos, top_token))

            # Continue confirming if we have more tokens (but slow down)
            if kind == 'logits':
                time.sleep(0.5)  # Slow client again
                client.add(seq_id, [top_token])
                client.send(f"evaluate {seq_id}")
        except Exception as e:
            break

    print(f"\nTotal messages received: {len(messages)}")
    for i, (kind, pos, tok) in enumerate(messages):
        print(f"  {i+1}. {kind}@{pos} -> token={tok}")

    # Check if we saw lookahead messages (proof of speculation)
    lookahead_msgs = [m for m in messages if m[0] == 'lookahead']
    if lookahead_msgs:
        print(f"\n✓ SUCCESS: Got {len(lookahead_msgs)} lookahead messages - speculation RAN!")
    else:
        print(f"\n✗ FAILURE: No lookahead messages - speculation did NOT run")

    client.close()
