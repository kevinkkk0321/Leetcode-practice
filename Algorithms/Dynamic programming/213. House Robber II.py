class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 0 or nums is None:
            return 0

        if len(nums) == 1:
            return nums[0]

        def rob_dp(nums):
            robEven = robOdd = 0
            for i in range(len(nums)):
                if i % 2 == 0:
                    robEven = max(robEven + nums[i], robOdd)
                else:
                    robOdd = max(robEven, robOdd + nums[i])
            return max(robEven, robOdd)


        return max(rob_dp(nums[:-1]), rob_dp(nums[1:]))
