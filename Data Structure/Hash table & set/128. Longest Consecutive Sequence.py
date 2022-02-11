class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # Hashmap
        num_set = set(nums)
        longest_streak = 0

        for num in nums:
            if num - 1 not in num_set:
                cur = num
                while cur in num_set:
                    cur += 1
                longest_streak = max(cur-num, longest_streak)
        return longest_streak

#         # Sorting
#         if not nums:
#             return 0

#         nums.sort()

#         cons = 1
#         max_cons = 1

#         for i in range(1, len(nums)):
#             if nums[i] == nums[i-1]:
#                 continue
#             if nums[i] == nums[i-1]+1:
#                 cons += 1
#             else:
#                 cons = 1
#             max_cons = max(max_cons, cons)
#         return max_cons
