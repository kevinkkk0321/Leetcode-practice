class Solution(object):
    def findNumberOfLIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        if not nums:
            return 0

        n = len(nums)
        dp_l = [1] * n
        dp_c = [1] * n
        for i, num in enumerate(nums):
            for j in range(i):
                if nums[i] <= nums[j]:
                    continue
                # found a longer subsequence
                if dp_l[j] + 1 > dp_l[i]:
                    dp_l[i] = dp_l[j] + 1
                    dp_c[i] = dp_c[j]
                # found same length subsequence
                elif dp_l[j] + 1 == dp_l[i]:
                    dp_c[i] += dp_c[j]

        max_length = max(dp_l)
        count = 0
        for l, c in zip(dp_l, dp_c):
            if l == max_length:
                count += c
        return count
