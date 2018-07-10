int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;
    int i=0;
    int j=0;
        
    for(i=0;i<numsSize;i++){
        if(nums[i]!=nums[j]){
            nums[j+1] = nums[i];
            j++;
        }        
    }
    
    return j+1;
}