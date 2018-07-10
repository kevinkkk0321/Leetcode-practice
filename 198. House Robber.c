#define max(a,b) a>b?a:b

int rob(int* nums, int numsSize) {
    if(numsSize==0) return 0;
    if(numsSize==1) return nums[0];
    if(numsSize==2) return max(nums[0],nums[1]);
    
    int table[numsSize];
    
    table[0] = nums[0];
    table[1] = max(nums[0],nums[1]);
    
    for(int i=2;i<numsSize;i++){
        table[i] = max(nums[i]+table[i-2],table[i-1]);
    }
    
    return  table[numsSize-1];
}

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        vector<int> table(nums.size(), 0);
        
        table[0] = nums[0];
        table[1] = max(nums[0],nums[1]);
        
        for(int i=2;i<nums.size();i++){
            table[i] = max(nums[i]+table[i-2], table[i-1]);
        }        
        return table[nums.size()-1];
    }
};


/* Online method -- cool ! */
class Solution {  
public:  
    int rob(vector<int>& nums) {  
        int dp0 = 0;  
        int dp1 = 0;  
          
        for (int i = 0;i<nums.size();i++){  
            int tmp = dp1;  
            dp1 = max(dp1,nums[i]+dp0);  
            dp0 = tmp;  
        }  
        return dp1;  
    }  
};  








