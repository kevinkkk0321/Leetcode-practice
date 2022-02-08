class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # hashtable
        hashtable = [0]*(len(nums)+1)

        for num in nums:
            if 0 < num < len(nums)+1:
                hashtable[num] = 1

        for i in range(1, len(hashtable)):
            if hashtable[i] == 0:
                return i
        return len(nums)+1

        # # use set
        # nums  = set(nums)
        # for i in range(1,len(nums)+2):
        #     if i not in nums:
        #         return i
