class Solution(object):
    def findDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        left = 1
        right = len(nums)

        while left < right:
            mid = left + (right - left) // 2
            count = 0

            count = sum(num <= mid for num in nums)
            # 如果个数小于等于 mid，则说明重复值在 [mid+1, n] 之间
            if count <= mid:
                left = mid + 1
            # 反之，重复值应在 [1, mid-1] 之间
            else:
                right = mid
        return left
