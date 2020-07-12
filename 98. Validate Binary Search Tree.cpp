/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (!root)
            return true;
        return BST(root, LONG_MIN, LONG_MAX);
    }
    bool BST(TreeNode* root, long min, long max){
        if(!root)
            return true;
        if(root->val >= max || root->val <= min)
            return false;
        return BST(root->left, min, root->val) && BST(root->right, root->val, max);
    }

};
