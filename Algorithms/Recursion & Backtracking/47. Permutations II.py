class Solution(object):
    def permuteUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []
        def backtrack(nums, tmp, used):
            if len(tmp) == len(nums):
                res.append(list(tmp))
                return

            for i in range(len(nums)):
                if used[i]:
                    continue
                if i>0 and nums[i-1]==nums[i] and used[i-1]==0:
                    continue
                tmp.append(nums[i])
                used[i] = 1
                backtrack(nums, tmp, used)
                used[i] = 0
                tmp.pop()

        tmp = []
        used = [0]*len(nums)
        nums = sorted(nums)

        backtrack(nums, tmp, used)

        return res

        
