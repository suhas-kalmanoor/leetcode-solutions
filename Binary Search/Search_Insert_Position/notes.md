# 0035 - Search Insert Position

## Topic
- Binary Search

## Idea
- Perform binary search.
- If found, return its index.
- If not found, `low` is the correct insertion position.

## Algorithm
1. Set `low = 0`, `high = n - 1`.
2. Binary search until `low > high`.
3. Return `low`.

## Complexity
- Time: O(log n)
- Space: O(1)

## Learned
- `low` = first index where target can be inserted.
- No second traversal needed.

## Mistakes
- Initially used another loop after binary search.
- Didn't realize `low` already stores the answer.