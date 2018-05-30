void rotate(int* nums, int numsSize, int k) {
    
    int i=0;
    int new_nums[numsSize];
    for(i=0;i<numsSize;i++){
        new_nums[(i+k)%numsSize] = nums[i];
    }
    for(i=0;i<numsSize;i++){
        nums[i] = new_nums[i];
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