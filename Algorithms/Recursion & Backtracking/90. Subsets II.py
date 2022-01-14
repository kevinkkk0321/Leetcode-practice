class Solution(object):
    def subsetsWithDup(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        if len(nums)==0:
            return
        nums.sort()
        def dfs(nums, tmp, result):
            if tmp not in result:
                result.append(tmp)
            for i in range(len(nums)):
                dfs(nums[i+1:], tmp+[nums[i]], result)
        result = []
        dfs(nums, [], result)
        return result
