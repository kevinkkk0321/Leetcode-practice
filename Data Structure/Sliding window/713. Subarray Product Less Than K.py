class Solution(object):
    def numSubarrayProductLessThanK(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if k <= 1:
            return 0
        left = 0
        total = 1
        ans = 0
        
        for right, val in enumerate(nums):
            total *= val
            
            while total >= k:
                total /= nums[left]
                left += 1
            ans += right - left + 1
        return ans
        
