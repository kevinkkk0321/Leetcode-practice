class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<int> dp(grid.size(), INT_MAX);  
        dp[0] = grid[0][0];
        
        for(int i=1;i<grid.size();i++){
            dp[i] = dp[i-1] + grid[i][0];
        }
        
        for (int i = 1; i < grid[0].size(); i++)
            for (int j = 0; j < grid.size(); j++) {
                    dp[j] = (j==0 ? dp[j]: min(dp[j],dp[j-1])) + grid[j][i] ;
            }
        
        return dp[grid.size()-1];
    }    
};