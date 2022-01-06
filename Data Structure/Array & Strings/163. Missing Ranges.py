class Solution(object):
    def findMissingRanges(self, nums, lower, upper):
        """
        :type nums: List[int]
        :type lower: int
        :type upper: int
        :rtype: List[str]
        """
        result = []
        prev = lower-1

        for i in range(len(nums)+1):
            curr = nums[i] if i<len(nums) else upper+1
            if curr-1>=prev+1:
                result.append(self.changeformat(prev+1, curr-1))
            prev = curr
        return result

    def changeformat(self, lower, upper):
        if lower==upper:
            return str(lower)
        else:
            return str(lower)+'->'+str(upper)
