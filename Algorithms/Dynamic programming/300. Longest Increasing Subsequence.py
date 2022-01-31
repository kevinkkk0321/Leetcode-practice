class Solution(object):
    def lengthOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = []

        def binarysearch(res, val):
            left = 0
            right = len(res)

            while left<right:
                mid = left+(right-left)/2
                if val > res[mid]:
                    left=mid+1
                else:
                    right=mid
            return left

        for num in nums:
            pos = binarysearch(res, num)
            if pos==len(res):
                res.append(num)
            else:
                res[pos] = num

        return len(res)


#         # dp
#         dp = [1]*len(nums)

#         for i in range(1, len(nums)):
#             for j in range(i):
#                 if nums[i]>nums[j]:
#                     dp[i] = max(dp[i], dp[j]+1)
#         return max(dp)
