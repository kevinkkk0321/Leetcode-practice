class Solution {
public:
    void dfs(vector<int>& temp, vector<vector<int>>& result, vector<int>& nums, int index) {  
        //if (index>=nums.size()) {  
		//	return;
        //} 
        for (int i=index; i<nums.size(); i++) {  
            temp.push_back(nums[i]);
            result.push_back(temp);
            dfs(temp,result, nums, i+1);  
            temp.pop_back();
        }  
    }  
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        result.push_back(temp);
        dfs(temp, result, nums, 0);
        return result;
    }
};