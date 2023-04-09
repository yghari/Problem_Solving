#!/bin/bash

# Read contents of main.c
contents=$(<main.c)

# Convert tabs to spaces, replace CRLF line endings with LF line endings, and remove trailing whitespace
contents=$(echo "$contents" | expand | sed 's/\r$//' | sed -e 's/[ \t]*$//' | sed -e :a -e '/^\n*$/{$d;N;ba}')

# Replace all occurrences of { and } with a newline and an indentation level based on the nesting level
indentation_level=0
preserve_curly_bracket=0
while read -r line; do
    if [[ $line == *"{"* ]]; then
        line="${line/\{/}"
        if [[ $preserve_curly_bracket -eq 1 ]]; then
            line="{"
        else
            line="\n$(printf ' %.0s' {1..$indentation_level})$line {"
        fi
        indentation_level=$((indentation_level + 4))
        preserve_curly_bracket=0
    elif [[ $line == *"}"* ]]; then
        indentation_level=$((indentation_level - 4))
        line="$(printf ' %.0s' {1..$indentation_level})$line"
        line="\n$line\n$(printf ' %.0s' {1..$indentation_level})"
        preserve_curly_bracket=1
    else
        line="$(printf ' %.0s' {1..$indentation_level})$line"
    fi
    modified_contents="$modified_contents$line\n"
done <<< "$contents"

# Write modified contents back to main.c
echo -e "$modified_contents" > main.c