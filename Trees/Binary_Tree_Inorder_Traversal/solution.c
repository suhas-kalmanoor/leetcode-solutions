/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int countnodes(struct TreeNode *root)
 {
    if(root==NULL)
    return 0;
    return countnodes(root->left)+1+countnodes(root->right);
 }
 void insert(struct TreeNode* root, int *ans,int *returnSize)
{
    if(root==NULL)
    return;
   insert(root->left,ans,returnSize);
   ans[(*returnSize)++]=root->val;
   insert(root->right,ans,returnSize);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=0;
    int n=countnodes(root);
    int* ans=malloc(n*sizeof(int));
    insert(root,ans,returnSize);
   return ans;
}