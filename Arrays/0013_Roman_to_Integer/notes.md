# Roman to Integer (#13)

**Difficulty:** Easy

## Problem

Given a Roman numeral, convert it to an integer.

Roman numerals are represented by the following symbols:

| Symbol | Value |
|--------|------:|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

Normally, Roman numerals are written from largest to smallest. However, when a smaller numeral appears before a larger one, its value is subtracted instead of added.

Examples:
- IV = 4
- IX = 9
- XL = 40
- XC = 90
- CD = 400
- CM = 900

---

## Approach

1. Create a helper function `value(char ch)` to return the integer value of a Roman numeral.
2. Traverse the string from left to right.
3. Compare the current numeral with the next numeral.
4. If the next numeral is larger, subtract the current value from the next value and skip the next character.
5. Otherwise, simply add the current value to the answer.
6. Return the final sum.

---

## Time Complexity

**O(n)**

The string is traversed only once.

---

## Space Complexity

**O(1)**

Only a few integer variables are used.

---

## Concepts Learned

- String traversal
- Helper functions
- `switch` statement
- Character-to-integer mapping
- Roman numeral subtraction rule
- Skipping processed characters using `i++`

---

## Mistakes I Made

- Initially used `switch` incorrectly with numeric cases instead of character cases.
- Tried modifying the input string instead of mapping characters to values.
- Forgot that after handling a subtractive pair (e.g., IV), the next character must be skipped.
- Accidentally added the current value even after processing a subtractive pair, causing incorrect answers.

---

## Key Observation

If the value of the next Roman numeral is greater than the current one:

```
Current < Next
```

then the result should be:

```
Next - Current
```

Otherwise:

```
Result += Current
```

---

## Revision

**Date Solved:** 31-07-2026

**Attempts:** 2

**Status:** ✅ Accepted

**Revision 1:** _______

**Revision 2:** _______
