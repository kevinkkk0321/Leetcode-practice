class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        def reverse(nums, left, right):
            while left < right:
                nums[left], nums[right] = nums[right], nums[left]
                left += 1
                right -= 1

        l = len(nums)
        k %= l

        reverse(nums, 0, l-1)
        reverse(nums, 0, k-1)
        reverse(nums, k, l-1)

        return nums
