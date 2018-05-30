/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
 /*Hash table*/
 int* twoSum(int* nums, int numsSize, int target) {
    int min = 100000;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<min) min = nums[i];
    }
    
    int max = target - min;
    int len = max - min +1;
    
    int *position_table = (int *)malloc(len*sizeof(int));
    int *res = (int *)malloc(2*sizeof(int));
           
    for(int i=0;i<len;i++){
        position_table[i] = -1;
    }
    
    for(int i=0;i<numsSize;i++){
        if(nums[i]<=max){
            if(position_table[target-nums[i]-min] != -1){
                res[0]=position_table[target-nums[i]-min];
                res[1]=i;
                return res;
            }
            position_table[nums[i]-min] = i;
        }    
    }    
    return res;
}



