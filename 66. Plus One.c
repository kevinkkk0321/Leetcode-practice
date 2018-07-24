/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    if(digits[digitsSize-1] != 9){
        digits[digitsSize-1]++;
        //return digits;
    }
    else{
        for(int i=digitsSize-1;i>=0;i--){   
            if(digits[i]==9) 
                digits[i] =0;     
            else {
                digits[i]++;
                break;
            }  
        }
    }
    
    if(digits[0]==0)
        *returnSize = digitsSize+1;
    else 
    {
        *returnSize = digitsSize;
        return digits;
    }
    
    int *ans = (int *)malloc(sizeof(int)*(*returnSize));
    
    for(int i=*returnSize-1;i>0;i--){
        ans[i] = digits[i-1];
    }
    ans[0] = 1;
    
    
    return ans;
}