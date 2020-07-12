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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BSThelper(nums, 0, (int)nums.size()-1);
    }
    TreeNode* BSThelper(vector<int>& nums, int left, int right){
        if(left > right) return 0;
        int mid = left+(right-left)/2;
        TreeNode *cur = new TreeNode(nums[mid]);
        cur->left = BSThelper(nums, left, mid-1);
        cur->right = BSThelper(nums, mid+1, right);
        return cur;
    }

};
