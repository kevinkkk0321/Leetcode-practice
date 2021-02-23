void rotate(int* nums, int numsSize, int k) {
    vector<int> new_nums = nums;
    for (int i = 0; i < nums.size(); ++i) {
        nums[(i + k) % nums.size()] = new_nums[i];
    }
}

void rotate(vector<int>& nums, int k) {
	if (nums.empty()) return;
	k %= nums.size();
	if (k == 0) return;
	reverse(begin(nums), end(nums));
	reverse(begin(nums), begin(nums) + k);
	reverse(begin(nums) + k, end(nums));
}

void rotate(vector<int>& nums, int k) {
        if (nums.empty() || (k %= nums.size()) == 0) return;
        
        for(int i=0;i<nums.size()-k;i++){
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
}

void rotate(int* nums, int numsSize, int k) {  
    int i,j;  
    int tem;  
    for(j=0;j<k;j++)  
    {  
        tem=nums[numsSize-1];  
        for(i=numsSize-2;i>=0;i--)  
            nums[i+1]=nums[i];  
        nums[0]=tem;  
    }  
}  



