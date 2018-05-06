/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
 /*Hash table*/
 int* twoSum(int* nums, int numsSize, int target) {  
    int i = 0;  
    int min;  
    min = nums[0];  
    for (i = 0; i < numsSize; i++) {  
       if (nums[i] < min)  
           min = nums[i];  
    }  
    int max = target - min;  
    int len = max - min + 1;     
    int *table = (int*)malloc(len*sizeof(int));  
    int *index = (int*)malloc(2*sizeof(int));  
    if (table == NULL) {  
        exit(1);  
    }  
    for (i = 0; i < len; i++) {  
        table[i] = -1;  
    }  
    for (i = 0; i < numsSize; i++) {  
        if (nums[i] <= max) {  
            if (table[target - nums[i] -min] != -1) {  
                index[0] = table[target - nums[i] -min];  
                index[1] = i;  
                break;  
            }  
            table[nums[i] -min] = i;  
        }  
    }  
    free(table);  
    return index;  
}  
 
 
 
 /* Iterative*/
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