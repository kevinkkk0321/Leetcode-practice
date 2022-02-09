class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        table = dict()

        for num in nums:
            if num in table:
                table[num] += 1
            else:
                table[num] = 1

        for key in table:
            if table[key] > len(nums)/2:
                return key

        # counts = Counter(nums)
        # return max(counts.keys(), key=counts.get)
            
