# 0066 - Plus One

## Idea
Traverse the digits from **right → left**.

Start with:

carry = 1

For each digit:
- `digit + carry == 10` → write `0`, keep carry = 1
- otherwise → write `digit + carry`, carry = 0

Once carry becomes 0, remaining digits are unchanged.

## Special case
If carry is still `1` after reaching the beginning:

`[9,9,9] → [1,0,0,0]`

Shift the result one position right, then put `1` at index `0`.

## Important
Use:

`digit + carry`

NOT `digit + 1` every time.

`returnSize`:
- normal case → `digitsSize`
- all 9s → `digitsSize + 1`

## Complexity
- Time: O(n)
- Space: O(n)

## Pattern
Carry propagation: process from right → left and continue carrying while needed.