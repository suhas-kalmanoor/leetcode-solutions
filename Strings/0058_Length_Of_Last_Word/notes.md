# 0058 - Length of Last Word

## Topic
- Strings
- Reverse Traversal

## Idea
- Start from the end.
- First skip trailing spaces.
- Then count characters until reaching a space or the beginning.

## Algorithm
1. `i = strlen(s) - 1`
2. Skip spaces: `while(s[i] == ' ') i--;`
3. Count characters while `s[i] != ' '`.
4. Return `count`.

## Complexity
- Time: O(n)
- Space: O(1)

## Learned
- Work backwards when the question asks for the **last** element/word.
- Separate **skipping spaces** from **counting the word**.

## Mistake
- Incremented `count` before checking for spaces, so trailing spaces were counted.