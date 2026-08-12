# 0088 - Merge Sorted Array

## Idea
Merge from **right → left** because nums1 has empty space at the end.

Pointers:
- `i = m - 1` → last real element of nums1
- `j = n - 1` → last element of nums2
- `k = m + n - 1` → last position of nums1

Compare `nums1[i]` and `nums2[j]`:
- Larger → put at `nums1[k]`
- Move that pointer and `k` backwards.

## After main loop
If `nums2` still has elements, copy them into nums1.

Remaining `nums1` elements don't need copying because they're already in place.

## Pattern
Same idea as **Merge Two Sorted Lists**, but:
- arrays instead of nodes
- merge backwards instead of forwards

## Complexity
- Time: O(m + n)
- Space: O(1)