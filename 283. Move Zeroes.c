void moveZeroes(int* nums, int numsSize) {
    int front=0;
    int second=0;
    
    while(second<numsSize){
        if(nums[second]==0){
            second++;
        }
        
        else {
            int temp;
            temp = nums[front];
            nums[front]=nums[second];
            nums[second] = temp;
            front++; second++;
        }
    }
}

