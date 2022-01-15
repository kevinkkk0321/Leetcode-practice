class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """

        dic = {}
        for i in nums:
            if i in dic:
                dic[i] = dic[i] + 1
            else:
                dic[i] = 1

        arr = sorted(dic, key = dic.get, reverse = True)
        return arr[:k]

        # return heapq.nlargest(k, dic.keys(), key=dic.get) 
