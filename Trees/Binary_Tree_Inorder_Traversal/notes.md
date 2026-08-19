# Binary Tree — Inorder Traversal

## Order
**Left → Root → Right**

Example:

    1
     \
      2
     /
    3

Inorder: `1 3 2`

## Recursive idea
1. Traverse left subtree
2. Process current node
3. Traverse right subtree

```c
inorder(root->left);
visit(root);
inorder(root->right);