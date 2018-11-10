/* 100 ms */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> allSol;
        if(nums.size()<3) return allSol;
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<nums.size()-2; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                if(nums[i]+nums[left]+nums[right] == 0){
                    vector<int> sol;
                    sol.push_back(nums[i]);
                    sol.push_back(nums[left]);
                    sol.push_back(nums[right]);
                    allSol.push_back(sol);
                    left++;
                    right--;
                    while(nums[left] == nums[left-1]) left++;
                    while(nums[right] == nums[right+1]) right--;
                }
                else if(nums[i]+nums[left]+nums[right] > 0) {
                    right--;
                }
                else if(nums[i]+nums[left]+nums[right] < 0) {
                    left++;
                }
            }
        }
        return allSol;        
    }
};

/**/
vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ret;
        for(int i = 0;i<nums.size();i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            if(nums[i]>0) break;

            int lower = i+1;
            int upper = nums.size()-1;
            while(lower < upper){
                if(nums[i]+nums[lower]+nums[upper]<0)
                    lower++;
                else if(nums[i]+nums[lower]+nums[upper]>0)
                    upper--;
                else{
                    vector<int> temp({nums[i],nums[lower],nums[upper]});
                    ret.push_back(temp);
                    lower++;
                    while(lower<nums.size() && nums[i]+nums[lower]+nums[upper] == 0) lower++;
                }
            }
        }
            return ret;
    }
