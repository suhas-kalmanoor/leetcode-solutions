# 0028 - Find the Index of the First Occurrence in a String

## Topic
- Strings
- Brute Force

## Idea
- Try every possible starting index in `haystack`.
- Compare each character of `needle`.
- If all characters match, return the starting index.
- Otherwise, return `-1`.

## Algorithm
1. Let `n = strlen(haystack)`, `m = strlen(needle)`.
2. If `m > n`, return `-1`.
3. For each `i` from `0` to `n-m`:
   - Compare `haystack[i+j]` with `needle[j]`.
   - If any mismatch, stop checking this position.
   - If `needle[j] == '\0'`, return `i`.
4. Return `-1`.

## Complexity
- Time: O(n × m)
- Space: O(1)

## Learned
- Outer loop = possible starting positions.
- Inner loop = compare the entire `needle`.
- Compare using `haystack[i+j]` and `needle[j]`.
- `j` reaching `'\0'` means the whole string matched.

## Mistakes
- Used `<` instead of `<=` for the last valid starting position.
- Forgot `strlen()` returns `size_t` (unsigned), causing underflow when `needle` is longer than `haystack`.