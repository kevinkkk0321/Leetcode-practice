class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []
        nums = sorted(nums)

        for i in range(len(nums)-2):
            if nums[i]>0:
                break
            if i == 0 or nums[i - 1] != nums[i]:
                self.sumfunc(nums, i, res)
        return res

    def sumfunc(self, nums, index, res):
        left = index+1
        right = len(nums)-1
        while left < right:
            if nums[index] + nums[left] + nums[right] == 0:
                res.append([nums[index], nums[left], nums[right]])
                left += 1
                right -= 1
                while nums[left] == nums[left - 1] and left<right:
                    left += 1
            elif nums[index] + nums[left] + nums[right] < 0:
                left += 1
            else:
                right -= 1
        return res
