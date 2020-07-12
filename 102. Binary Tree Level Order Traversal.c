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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return { };
        vector<vector<int>> res;
        queue<TreeNode*> q{{root}};
        //q.push(root);

        while(!q.empty()){
            vector<int> temp;
            int n = q.size();

            while(n){
                TreeNode *head = q.front();
                q.pop();
                temp.push_back(head->val);
                if(head->left) q.push(head->left);
                if(head->right) q.push(head->right);
                n--;
            }
            res.push_back(temp);
        }
        return res;
    }
};
