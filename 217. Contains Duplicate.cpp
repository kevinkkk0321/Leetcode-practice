class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> hash;

        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]] == true)
                return true;
            hash[nums[i]] = true;
        }
        return false;
    }
};
