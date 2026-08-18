0070 — Climbing Stairs

IDEA:
To reach step n, the final move is either:
- 1 step → came from n-1
- 2 steps → came from n-2

Therefore:
ways(n) = ways(n-1) + ways(n-2)

BASE CASES:
ways(1) = 1
ways(2) = 2

ITERATIVE APPROACH:
Keep only the previous 2 answers.

prev = ways(n-2)
curr = ways(n-1)

next = prev + curr
prev = curr
curr = next

Repeat until reaching n.

IMPORTANT:
n = number of stairs
curr = number of ways

Don't compare curr/next with n.

Example:
ways(1) = 1
ways(2) = 2
ways(3) = 3
ways(4) = 5
ways(5) = 8

COMPLEXITY:
Time: O(n)
Space: O(1)

PATTERN:
When a problem's answer depends only on the previous 2 answers,
you often don't need an entire DP array — just keep 2 variables.