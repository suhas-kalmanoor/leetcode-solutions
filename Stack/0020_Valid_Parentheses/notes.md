# 0020 - Valid Parentheses

## Topic
- Stack

## Idea
- Push opening brackets.
- For every closing bracket:
  - Stack empty → Invalid.
  - Top doesn't match → Invalid.
  - Else pop.
- At the end, stack must be empty.

## Stack Operations
- Push → Opening bracket
- Peek → Check top bracket
- Pop → Remove matched opening bracket

## Complexity
- Time: O(n)
- Space: O(n)

## Learned
- Stack = LIFO (Last In First Out)
- Always compare with the top of the stack.
- Pop only one element after a successful match.

## Mistakes
- Passed arguments to `match()` in the wrong order.
- Forgot to `pop()` after a successful match.
- Forgot to reset `top = -1`.
- Initially thought I should pop until finding a match.