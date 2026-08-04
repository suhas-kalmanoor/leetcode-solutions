# 0027 - Remove Element

## Topic
- Arrays
- Two Pointers

## Idea
- Use `read` to scan the array.
- Use `write` to store elements that should be kept.
- Skip elements equal to `val`.

## Algorithm
1. `write = 0`
2. Traverse the array.
3. If `nums[i] != val`:
   - `nums[write] = nums[i]`
   - `write++`
4. Return `write`.

## Complexity
- Time: O(n)
- Space: O(1)

## Learned
- Same pattern as Remove Duplicates.
- `write` = next valid position.
- Overwrite unwanted elements.

## Mistakes
- None.