#!/usr/bin/env python3
"""
Extract Example code from Funky manual pages, run it, and add/replace the Output or Error section.

Usage:
    python3 tools/funky_verify_examples.py <doc_path> [doc_path ...]
"""

import os
import re
import subprocess
import sys
import tempfile
import pathlib


def process_doc(path):
    doc_path = pathlib.Path(path)
    lines = doc_path.read_text().split('\n')

    # --- find the Example: line ---
    example_start = next(
        (i for i, line in enumerate(lines) if re.match(r'^  Example:$', line)),
        None,
    )
    if example_start is None:
        print(f"  no Example section, skipping")
        return False

    # --- collect code lines between Example: and next section/footer ---
    raw_code = []
    for i in range(example_start + 1, len(lines)):
        line = lines[i]
        if re.match(r'^  [\w ]+:$', line) or re.match(r'^\(\(', line):
            break
        raw_code.append(line)

    # strip 4-space indent, leading/trailing blank lines
    code_lines = [l[4:] if l.startswith('    ') else l for l in raw_code]
    while code_lines and code_lines[0].strip() == '':
        code_lines.pop(0)
    while code_lines and code_lines[-1].strip() == '':
        code_lines.pop()

    if not code_lines:
        print(f"  empty Example, skipping")
        return False

    # --- run via fkyrun ---
    fd, tmp_path = tempfile.mkstemp(suffix='.fky')
    try:
        with os.fdopen(fd, 'w') as f:
            f.write('#!/usr/bin/env fkyrun\n')
            f.write('\n'.join(code_lines))
            f.write('\n')
        result = subprocess.run(
            ['fkyrun', tmp_path],
            capture_output=True, text=True, timeout=30,
        )
        stdout, stderr, exit_code = result.stdout, result.stderr, result.returncode
    except subprocess.TimeoutExpired:
        stdout, stderr, exit_code = '', 'TIMEOUT', 1
    finally:
        pathlib.Path(tmp_path).unlink()

    # --- decide section name and content ---
    if exit_code == 0:
        section_name = 'Output'
        content = stdout.strip() if stdout.strip() else '(no output)'
    else:
        section_name = 'Error output'
        content = stderr.strip() if stderr.strip() else f'EXIT CODE {exit_code}'

    # new_section: blank line separator + header + blank + indented content
    new_section = [f'  {section_name}:', ''] + [f'    {line}' for line in content.split('\n')] + ['']

    # --- find existing Output/Error sections and footer ---
    def find_section(name):
        start = next((i for i, l in enumerate(lines) if re.match(rf'^  {name}:$', l)), None)
        if start is None:
            return None, None
        end = next(
            (i for i in range(start + 1, len(lines))
             if re.match(r'^  [\w ]+:$', lines[i]) or re.match(r'^\(\(', lines[i])),
            None,
        )
        return start, end

    output_start, output_end = find_section('Output')
    error_start, error_end = find_section('Error output')
    footer_start = next((i for i, l in enumerate(lines) if re.match(r'^\(\(', l)), None)

    # helper to remove a section by index range
    def remove(start, end):
        if start is None:
            return lines
        return lines[:start] + (lines[end:] if end else lines[start + 1:])

    # --- insert or replace ---
    if section_name == 'Output':
        if output_start is not None:
            lines = lines[:output_start] + new_section + (lines[output_end:] if output_end else lines[output_start + 1:])
            print("  Output section replaced")
        else:
            insert = footer_start if footer_start else len(lines)
            lines = lines[:insert] + new_section + lines[insert:]
            print("  Output section added")
        # remove stale Error output
        error_start2, error_end2 = find_section('Error output')
        if error_start2 is not None:
            lines = remove(error_start2, error_end2)
            print("  stale Error output removed")
    elif section_name == 'Error output':
        if error_start is not None:
            lines = lines[:error_start] + new_section + (lines[error_end:] if error_end else lines[error_start + 1:])
            print("  Error output section replaced")
        else:
            insert = footer_start if footer_start else len(lines)
            lines = lines[:insert] + new_section + lines[insert:]
            print("  Error output section added")
        # remove stale Output
        output_start2, output_end2 = find_section('Output')
        if output_start2 is not None:
            lines = remove(output_start2, output_end2)
            print("  stale Output removed")

    doc_path.write_text('\n'.join(lines))
    return True


def main():
    if len(sys.argv) < 2:
        print("Usage: python3 tools/funky_verify_examples.py <doc_path> [doc_path ...]")
        sys.exit(1)

    for doc_path in sys.argv[1:]:
        print(f"Processing {doc_path}...")
        process_doc(doc_path)

    print("Done.")


if __name__ == '__main__':
    main()
