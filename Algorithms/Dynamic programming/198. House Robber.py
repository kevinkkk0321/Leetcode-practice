class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 0:
            return 0
        elif len(nums) == 1:
            return nums[0]
        
             
        max_array = [0]*len(nums)
        max_array[0] = nums[0]
        max_array[1] = max(nums[0], nums[1])
        
        
        for i in range(2, len(nums)):
            max_array[i] = max(max_array[i-1], max_array[i-2]+nums[i])
            
        return max_array[-1]