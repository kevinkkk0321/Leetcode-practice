class Solution {    
public: 
    void dfs(vector<int>& path, vector<int>& nums, vector<vector<int>>& result) {  
        if (path.size() == nums.size()) {  
            result.push_back(path);
			return;
        }  
        for (int num : nums) {  
            if(find(begin(path), end(path), num) != end(path)) continue;
            path.push_back(num);
            dfs(path, nums, result);  
            path.pop_back();
        }  
    }  
    
    vector<vector<int>> permute(vector<int>& nums) {
		
        vector<vector<int>> result;
        vector<int> path;
        dfs(path, nums, result);
        return result;
    }
    
};





/*C code version*/  //unfinished
/*
/**
 * Return an array of arrays of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
void push_back(int* add,int *array){
    //if(size == sizeof(array)/sizeof(int*)) return 0;
    int size = sizeof(array)/sizeof(int*);
    array[size] = add;
}

int dfs(int* nums, int numsSize, int* returnarray){
    if (i==nums.size())
        {
            vecs.push_back(nums);
            return;
        }
    if(numsSize == sizeof(nums)/sizeof(int*)) return;
    
    for(int i=0;i<numsSize;i++){
        push_back(nums[i], returnarray);
        dfs(nums, numsSize, returnarray);
        
    }
}

int** permute(int* nums, int numsSize, int* returnSize) {
    int **result, i;
    *returnSize=1;
    
    for(i=numsSize;i>1;i--){
        returnSize *= i;
    }
    
    result = (int **)malloc((*returnSize)*sizeof(int *));
    
    for(i=0;i<returnSize;i++){
        *(result+i) = (int *)malloc(numsSize*sizeof(int));
    }
    
    dfs(0, numsSize, ans);
    return ans;
}
*/
*/
