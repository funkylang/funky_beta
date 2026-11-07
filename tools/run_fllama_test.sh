#!/bin/bash
# Launch the fllama test server detached (background daemon).
# Usage: bash tools/run_fllama_test.sh [extra args...]
set -e
cd "$(dirname "$0")/.."
LOG=/tmp/fllama_test_server.log
# stop a previous instance on port 7683 if present
OLD=$(ss -tlnp 2>/dev/null | grep ':7683' | grep -oP 'pid=\K[0-9]+' | head -1 || true)
if [ -n "$OLD" ]; then
  kill "$OLD" 2>/dev/null || true
  for i in $(seq 1 20); do
    ps -p "$OLD" > /dev/null 2>&1 || break
    sleep 0.5
  done
fi
# fully detach: new session, no controlling tty, survives this script
setsid ./fllama --mtp 3 --eager --concurrent-sequences 8 \
  "$@" > "$LOG" 2>&1 < /dev/null &
NEWPID=$!
disown 2>/dev/null || true
echo "fllama started: PID=$NEWPID log=$LOG"
