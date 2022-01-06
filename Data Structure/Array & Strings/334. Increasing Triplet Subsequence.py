class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        first_num, second_num = float("inf"), float("inf")

        for n in nums:
            if n <= first_num:
                first_num = n
            elif n <= second_num:
                second_num = n
            else:
                return True
        return False
