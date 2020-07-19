class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size()-1);
        return nums;
    }

    void quicksort(vector<int>& nums, int left, int right){
        if(left >= right)
            return;
        int pivot = nums[left];
        int index = left;

        for(int i=index;i<=right;i++){
            if(nums[i]<pivot)
                swap(nums[++index], nums[i]);
        }
        swap(nums[left], nums[index]);

        quicksort(nums, left, index-1);
        quicksort(nums, index+1, right);
    }
};
