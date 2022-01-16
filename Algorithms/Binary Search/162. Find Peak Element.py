class Solution(object):
    def findPeakElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # # method 1: Linear O(n)
        # for i in range(0, len(nums)-1):
        #     if nums[i]>nums[i+1]:
        #         return i
        # return len(nums) - 1

        # method 2: Binary Search O(logn)
        left, right = 0, len(nums)-1
        while left<right:
            mid = (left+right)/2
            print(mid)
            if nums[mid] < nums[mid + 1]:
                left = mid + 1
            else:
                right = mid
        return left

        
