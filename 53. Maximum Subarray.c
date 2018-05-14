#define max(a,b) a>b?a:b
int maxSubArray(int* nums, int numsSize) {
    int tempSum=0;
    int Max=INT_MIN;
    for(int i=0;i<numsSize;i++){
        tempSum = max(tempSum+nums[i],nums[i]);
        Max = max(Max, tempSum);
    }
    return Max;
}