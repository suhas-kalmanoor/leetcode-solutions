# 0021 - Merge Two Sorted Lists

## Topic
- Linked Lists

## Idea
- Compare the current nodes of both lists.
- Attach the smaller node to the merged list.
- Move the pointer of the list from which the node was taken.
- Repeat until one list becomes `NULL`.
- Attach the remaining list directly.

## Algorithm
1. Initialize `head` and `tail` with the smaller first node.
2. Traverse while both lists are not `NULL`.
3. Compare `list1->val` and `list2->val`.
4. Attach the smaller node to `tail->next`.
5. Move `tail` and the corresponding list pointer.
6. When one list ends, attach the remaining list.
7. Return `head`.

## Complexity
- Time: O(n + m)
- Space: O(1)

## Learned
- A linked list is traversed using pointers, not indices.
- `head` always points to the first node and never changes.
- `tail` always points to the last node of the merged list.
- `tail->next` connects the next node into the merged list.
- After taking a node, advance that list's pointer (`list1 = list1->next` or `list2 = list2->next`).
- The `while(list1 != NULL && list2 != NULL)` loop stops only when one list is exhausted.
- The remaining nodes can be attached with one statement because they are already sorted.

## Mistakes
- Compared pointers instead of node values (`list1` vs `list1->val`).
- Initially chose the larger node instead of the smaller one.
- Forgot to handle empty lists before accessing `list1->val` or `list2->val`.
- Didn't understand that `tail->next` links two existing nodes—it doesn't create a new node.
- Forgot to return `head`.

## Key Pointer Movement

```text
list1: 1 → 3 → 5
list2: 2 → 4 → 6

Take 1
tail->next = list1
tail = list1
list1 = list1->next

Take 2
tail->next = list2
tail = list2
list2 = list2->next
```