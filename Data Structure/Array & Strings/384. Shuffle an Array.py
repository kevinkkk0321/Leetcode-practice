class Solution(object):

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.nums = nums


    def reset(self):
        """
        :rtype: List[int]
        """
        return self.nums


    def shuffle(self):
        """
        :rtype: List[int]
        """
        ans = self.nums[:]
        for i in range(len(ans)):
            j = random.randrange(0, i+1)
            ans[i], ans[j] = ans[j], ans[i]
        return ans



# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.reset()
# param_2 = obj.shuffle()
