class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        if len(nums)==0:
            return nums

        result = []
        n = len(nums)

        def dfs(nums, subset, result):
            result.append(subset)
            for i in range(len(nums)):
                dfs(nums[i+1:], subset+[nums[i]], result)
        dfs(nums, [], result)
        return result

        
