# 0069 - Sqrt(x)

## Idea
Binary search for the **largest integer `mid` where `mid * mid <= x`**.

## Logic
- `mid² > x` → too big → move `high` left
- `mid² < x` → valid candidate → save `mid`, move `low` right
- `mid² == x` → exact answer → return `mid`

`temp` = largest valid candidate found so far.

## Important
Use `long long` for `mid` and `mid * mid` to avoid overflow.

## Complexity
- Time: O(log x)
- Space: O(1)

## Pattern
Binary search isn't always "find target".
It can also find the **largest/smallest value satisfying a condition**.

For this problem:

`mid * mid <= x`