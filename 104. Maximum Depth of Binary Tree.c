/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
 /* Recursive */

 #define Max(a,b) ((a>b)? a:b)

int maxDepth(struct TreeNode* root) {
    if(root == NULL) return 0;
    
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return Max(left, right)+1;
    
}