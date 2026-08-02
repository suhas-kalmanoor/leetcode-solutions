# 0014 - Longest Common Prefix

**Difficulty:** Easy  
**Topic:** Strings

---

# Problem

Given an array of strings, return the **longest common prefix** among them.

If there is no common prefix, return an empty string `""`.

Example:

Input:
```
["flower","flow","flight"]
```

Output:
```
"fl"
```

---

# Idea

Instead of comparing every string with every other string, use the **first string as the reference**.

Check each character position (`i`) of the first string.

For every position:

- Compare that character with the character at the same position in every other string.
- If every string matches, add that character to the answer.
- The moment one string differs (or ends), the prefix is complete.

---

# Algorithm

1. Allocate memory for the answer.
2. Traverse the first string character by character.
3. For each character:
   - Compare it with the corresponding character of every string.
   - If any mismatch occurs:
     - Add `'\0'`
     - Return the answer immediately.
4. If the entire first string matches, terminate the answer with `'\0'`.
5. Return the answer.

---

# Why use the first string?

Every string must share the prefix with the first string.

Instead of comparing every pair of strings:

```
A vs B
A vs C
B vs C
...
```

just compare every string with the first one:

```
Reference = strs[0]
```

This is much simpler.

---

# Memory Allocation

```c
int l = strlen(strs[0]);
char *ans = (char *)malloc((l + 1) * sizeof(char));
```

Why `l + 1`?

The extra character is for the null terminator.

Example:

```
flower
```

Memory:

```
f l o w e r \0
```

Even if the answer is only `"fl"`, allocating based on the first string is safe because the common prefix can never be longer than it.

---

# Understanding `char **`

Suppose the input is:

```c
char *strs[] = {
    "flower",
    "flow",
    "flight"
};
```

Memory:

```
strs

+---------+
|   * ----|----> "flower"
+---------+
|   * ----|----> "flow"
+---------+
|   * ----|----> "flight"
+---------+
```

Therefore,

```
strs[0]
```

is

```
"flower"
```

Type:

```c
char *
```

---

```
strs[0][0]
```

is

```
'f'
```

Type:

```c
char
```

---

# Variables

```c
i
```

Character position.

```
flower

012345
```

If `i = 2`, we are checking:

```
o
```

---

```c
j
```

String number.

```
j = 0 -> flower
j = 1 -> flow
j = 2 -> flight
```

---

# Dry Run

Input:

```
flower
flow
flight
```

---

## i = 0

Reference:

```
f
```

Compare:

```
f == f ✓
f == f ✓
f == f ✓
```

Store:

```
ans = "f"
```

---

## i = 1

Reference:

```
l
```

Compare:

```
l == l ✓
l == l ✓
l == l ✓
```

Store:

```
ans = "fl"
```

---

## i = 2

Reference:

```
o
```

Compare:

```
o == o ✓
o == o ✓
i != o ✗
```

Mismatch found.

Store:

```
ans[2] = '\0'
```

Return:

```
"fl"
```

---

# Time Complexity

Outer loop:

```
Length of first string = M
```

Inner loop:

```
Number of strings = N
```

Total:

```
O(N × M)
```

---

# Space Complexity

Answer array:

```
O(M)
```

where `M` is the length of the first string.

---

# Things I Learned

### `char **`

A pointer to a pointer to a character.

Used when dealing with an **array of strings**.

---

### Arrays decay to pointers

```
char words[][10]
```

becomes

```
char *
```

when passed (for 1D character arrays).

An array of strings:

```c
char *words[]
```

becomes:

```c
char **words
```

inside a function.

Pointers themselves **do not** gain another `*` when passed to a function.

---

### Pointer Reading Rule

Each `*` means **pointer to**.

```
char *name
```

Pointer to a character.

```
char **names
```

Pointer to a pointer to a character.

```
int *arr[5]
```

Array of 5 pointers to integers.

---

# Common Mistakes I Made

- Used the maximum string length instead of using the first string.
- Compared matches instead of stopping at the first mismatch.
- Stored the answer inside the inner loop.
- Used `break`, which stopped checking all strings.
- Tried to use `strs[j][i]` after the inner loop had finished.
- Forgot that `j` becomes out of bounds after the loop exits.
- Confused `char **` with a normal string.

---

# Final Lesson

The key idea is **not**:

> "Copy matching characters."

The key idea is:

> **Keep checking until the first mismatch.**

Once a mismatch is found, the longest common prefix has already ended.