class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        first = second = float('inf')

        for num in nums:
            if num < first:
                first = num
            elif first < num < second:
                second = num
            if num > second:
                return True
        return False
            
