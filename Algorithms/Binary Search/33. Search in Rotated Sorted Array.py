class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """

        left = 0
        right = len(nums)-1

        while left<=right:
            mid = left+ (right - left)//2
            if target==nums[mid]:
                return mid
            elif nums[mid]>=nums[left]:
                if target>=nums[left] and target<nums[mid]:
                    right = mid - 1
                else:
                    left = mid + 1
            else:
                if target<=nums[right] and target>nums[mid]:
                    left = mid + 1
                else:
                    right = mid - 1

        return -1