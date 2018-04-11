/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int* array = (int *)malloc(sizeof(int)*3);
    for(int i=0;i<numsSize;++i){
        for (int j=i+1;j<numsSize;++j){
            if(nums[i]+nums[j]==target ){
                array[0]=i;array[1]=j;
                return array;
            }            
        }
    }
    
    return NULL;
}