vector<int> CyclicRotation(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
	if(A.size()==0) return A;

    while (K > 0) {
        int head = A[A.size()-1];
        A.pop_back();
        A.insert(A.begin(), head);
        K--;
    }
    return A;
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



