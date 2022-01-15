class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        if len(nums)==0:
            return nums
        n = len(nums)

        def dfs(nums, tmp, result):
            if len(tmp)==n:
                result.append(tmp)
                return
            for i in range(len(nums)):
                dfs(nums[:i]+nums[i+1:], tmp+[nums[i]], result)

        result = []
        dfs(nums, [], result)
        return result


        
