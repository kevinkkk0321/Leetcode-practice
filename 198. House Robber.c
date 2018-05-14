#define max(a,b) a>b?a:b

int rob(int* nums, int numsSize) {
    if(numsSize==0) return 0;
    if(numsSize==1) return nums[0];
    if(numsSize==2) return max(nums[0],nums[1]);
    
    int table[numsSize];
    
    for(int i=2;i<numsSize;i++){
        table[0] = nums[0];
        table[1] = max(nums[0],nums[1]);
        table[i] = max(nums[i]+table[i-2],table[i-1]);
    }
    
    return  table[numsSize-1];
}