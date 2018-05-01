/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool checktree(struct TreeNode* node1, struct TreeNode* node2);

bool isSymmetric(struct TreeNode* root) {
    return checktree(root, root);
}

bool checktree(struct TreeNode* node1, struct TreeNode* node2){
    if(node1==NULL && node2==NULL) return true;
    else if((!node1 && node2) || (node1 && !node2)) return false;
    else if(node1->val != node2->val) return false;
    else return checktree(node1->left, node2->right) && checktree(node2->right, node1->left);
}



