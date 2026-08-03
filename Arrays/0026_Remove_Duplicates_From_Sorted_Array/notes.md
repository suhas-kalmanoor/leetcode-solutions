# 0026 - Remove Duplicates from Sorted Array

## Topic
- Arrays
- Two Pointers

## Idea
- Since the array is sorted, duplicates are adjacent.
- Use one pointer (`read`) to scan the array.
- Use another pointer (`write`) to place the next unique element.
- Return the number of unique elements (`write`).

## Algorithm
1. Set `write = 1`.
2. Traverse from index `1` to `n-1`.
3. If `nums[i]` is different from the last unique element (`nums[write-1]`):
   - Copy it to `nums[write]`.
   - Increment `write`.
4. Return `write`.

## Complexity
- Time: O(n)
- Space: O(1)

## Learned
- Sorted arrays keep duplicates together.
- `read` scans every element.
- `write` marks where the next unique element should be stored.
- We overwrite duplicates instead of deleting them.
- Only the first `write` elements matter after the function finishes.

## Mistakes
- Compared `nums[write]` instead of the current element `nums[i]`.
- Wrote to `nums[i]` instead of `nums[write]`.
- Returned `i` instead of `write`.