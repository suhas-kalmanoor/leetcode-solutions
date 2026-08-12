# 0083 - Remove Duplicates from Sorted List

## Idea
Traverse the linked list and compare each node with its next node.

- Same value → remove `ptr->next`
- Different value → move `ptr` forward

## Important
After deleting a duplicate, **don't move `ptr`**.

Example:

1 → 1 → 1 → 2

Delete one:

1 → 1 → 2
↑
ptr

Check again because another duplicate may exist.

## Pointer deletion
```c
temp = ptr->next;
ptr->next = temp->next;
free(temp);