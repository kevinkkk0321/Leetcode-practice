class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        dic = set()

        for i, num in enumerate(nums):
            if num in dic:
                return True
            else:
                dic.add(num)
        return False
