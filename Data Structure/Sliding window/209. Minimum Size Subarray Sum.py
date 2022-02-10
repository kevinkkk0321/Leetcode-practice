class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0
        left = right = 0
        sum_ = 0
        ans = float('inf')
        
        for right in range(len(nums)):
            sum_ += nums[right]
            
            while sum_>=target and left<=right:
                ans = min(ans, right - left + 1)
                sum_ -= nums[left]
                left += 1
                
        return ans if ans <= len(nums) else 0
        
