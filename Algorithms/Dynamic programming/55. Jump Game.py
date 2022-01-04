class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        l = len(nums)
        if l <=1:
            return True
        farthest = 0
        
        for i in range(l):
            if i > farthest:
                return False
            farthest = max(i+nums[i], farthest)
        return True