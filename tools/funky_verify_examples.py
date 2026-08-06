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


def collect_example_lines(lines, start):
    """Collect code lines after an Example: header, stopping at next section or footer.

    Section headers are exactly 2-space indent + capital letter.
    Code-level branch colons (e.g. ``      :`` inside if blocks) have 6+ spaces
    and must NOT be mistaken for section boundaries.
    """
    raw_code = []
    for i in range(start + 1, len(lines)):
        line = lines[i]
        if re.match(r'^  [A-Z][\w ]+:$', line) or re.match(r'^\(\(', line):
            break
        raw_code.append(line)
    # strip 4-space indent, leading/trailing blank lines
    code_lines = [l[4:] if l.startswith('    ') else l for l in raw_code]
    while code_lines and code_lines[0].strip() == '':
        code_lines.pop(0)
    while code_lines and code_lines[-1].strip() == '':
        code_lines.pop()
    return code_lines


def run_example(code_lines):
    """Run code via fkyrun, return (section_name, content_string)."""
    if not code_lines:
        return None, None
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
    if exit_code == 0:
        output = stdout.strip() or stderr.strip() or '(no output)'
        return 'Output', output
    else:
        return 'Error output', stderr.strip() if stderr.strip() else f'EXIT CODE {exit_code}'


def find_all_section_ranges(lines, name):
    """Return list of (range_start, end, header_idx) for every occurrence of a section."""
    results = []
    for i, l in enumerate(lines):
        if re.match(rf'^  {re.escape(name)}:$', l):
            header_idx = i
            range_start = header_idx
            if header_idx > 0 and lines[header_idx - 1].strip() == '':
                range_start = header_idx - 1
            body_start = header_idx + 1
            end = body_start
            for j in range(body_start, len(lines)):
                line = lines[j]
                if line.strip() == '':
                    end = j + 1
                elif line.startswith('    '):
                    end = j + 1
                elif re.match(r'^  [\w ]+:$', line):
                    break
                elif re.match(r'^\(\(', line):
                    break
                else:
                    break
            results.append((range_start, end, header_idx))
    return results


def build_new_section(section_name, content):
    """Build replacement section lines: blank + header + blank + indented content + blank."""
    return ['', f'  {section_name}:', ''] + [f'    {line}' for line in content.split('\n')] + ['']


def remove_range(lines, rs, end, hs):
    """Remove a section by index range."""
    if rs is None:
        return lines
    return lines[:rs] + (lines[end:] if end else lines[hs + 1:])


def process_doc(path):
    doc_path = pathlib.Path(path)
    lines = doc_path.read_text().split('\n')

    # --- find all Example: lines ---
    example_starts = [i for i, line in enumerate(lines) if re.match(r'^  Example:$', line)]
    if not example_starts:
        print(f"  no Example section, skipping")
        return False

    # Collect code for each example and run them
    results = []
    for idx, start in enumerate(example_starts):
        code_lines = collect_example_lines(lines, start)
        if not code_lines:
            results.append((start, None, None))
            continue
        section_name, content = run_example(code_lines)
        results.append((start, section_name, content))

    # Build example->output pairs by scanning sequentially.
    # Each pair is (example_start, example_code_end, output_section_range)
    # where output_section_range is None if no output yet.
    all_output = find_all_section_ranges(lines, 'Output')
    all_error = find_all_section_ranges(lines, 'Error output')

    # Pre-build a mapping: example_start -> (output_range or None)
    # by walking forward and assigning the first Output/Error output after each code block.
    example_pairs = []
    for start in example_starts:
        # Find where the code block ends (first SECTION HEADER or footer after the code)
        # Section headers are exactly 2-space indent; code is 4+ space indent.
        # We must skip past branch colons (e.g. "      :" inside if blocks) which are 6+ spaces.
        code_end = len(lines)
        for i in range(start + 1, len(lines)):
            line = lines[i]
            if re.match(r'^  [A-Z][\w ]+:$', line) or re.match(r'^\(\(', line):
                # Section headers start with exactly 2 spaces + capital letter
                code_end = i
                break
        # The line at code_end is the first section header after code.
        # Check if it's an Output or Error output that belongs to this example.
        matched = None
        for rs, end, hs in all_output:
            if hs == code_end:
                matched = ('Output', (rs, end, hs))
                break
        if matched is None:
            for rs, end, hs in all_error:
                if hs == code_end:
                    matched = ('Error output', (rs, end, hs))
                    break
        example_pairs.append((start, code_end, matched))

    # Process examples in reverse order so earlier replacements don't shift later indices
    for pair_idx, (start, code_end, matched) in enumerate(reversed(example_pairs)):
        # Get the result for this example (same reverse index into results)
        real_idx = len(results) - 1 - pair_idx
        start_r, section_name, content = results[real_idx]
        if section_name is None:
            print("  empty Example, skipped")
            continue

        new_section = build_new_section(section_name, content)
        footer_start = next((i for i, l in enumerate(lines) if re.match(r'^\(\(', l)), None)

        # Determine the output type to keep/remove based on matched pair
        if matched:
            kept_type, kept_range = matched
            if section_name == kept_type:
                # Replace the existing section
                rs, end, hs = kept_range
                lines = lines[:rs] + new_section + lines[end:]
                print(f"  {section_name} section replaced")
            else:
                # Type mismatch (e.g. was Output, now Error output) — replace
                rs, end, hs = kept_range
                lines = lines[:rs] + new_section + lines[end:]
                print(f"  {section_name} section replaced")
        else:
            # No existing output — insert before footer
            insert = footer_start if footer_start else len(lines)
            lines = lines[:insert] + new_section + lines[insert:]
            print(f"  {section_name} section added")

    # deduplicate consecutive blank lines (keep max 1)
    deduped = []
    prev_blank = False
    for line in lines:
        is_blank = line.strip() == ''
        if is_blank and prev_blank:
            continue
        deduped.append(line)
        prev_blank = is_blank
    lines = deduped

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
