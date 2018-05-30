void moveZeroes(int* nums, int numsSize) {
	/*要注意兩個指標都是從位置0開始*/
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

