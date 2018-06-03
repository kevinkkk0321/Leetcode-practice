/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return Equal(root->left, root->right);
    }
    bool Equal(TreeNode* p, TreeNode* q)
    {
        if(!p && !q) return true;
        else if((!p && q) || (!q && p) )return false;
        else if (p->val != q->val) return false;
        else return Equal(p->left, q->right) && Equal(p->right, q->left);        
    }
};