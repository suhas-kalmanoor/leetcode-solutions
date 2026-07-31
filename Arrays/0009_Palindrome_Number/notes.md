# Palindrome Number (#9)

**Difficulty:** Easy

## Problem

Given an integer `x`, return `true` if `x` is a palindrome, otherwise return `false`.

A palindrome reads the same forward and backward.

---

## Approach

1. If the number is negative, return `false` because negative numbers cannot be palindromes.
2. Store the original number.
3. Reverse the number using:
   - `% 10` to get the last digit.
   - `/ 10` to remove the last digit.
4. Compare the reversed number with the original number.
5. If they are equal, return `true`; otherwise return `false`.

---

## Time Complexity

**O(log₁₀ n)**

Each digit is processed exactly once.

---

## Space Complexity

**O(1)**

Only a few variables are used.

---

## Concepts Learned

- Reversing an integer.
- Using `% 10` to extract the last digit.
- Using `/ 10` to remove the last digit.
- Using `long long` to avoid overflow while reversing.
- Working with boolean return values.

---

## My Solution

- Reverse the integer.
- Compare it with the original number.
- Return `true` if both are equal.

---

## Notes

- Negative numbers are never palindromes.
- Using `long long` prevents overflow during reversal.
- There is a more optimized solution that reverses only half of the number. I'll learn that later after gaining more DSA experience.
## Revision

**Date Solved:** 31-07-2026

**Attempts:** 1

**Status:** ✅ Accepted

**Revision 1:** _______

**Revision 2:** _______