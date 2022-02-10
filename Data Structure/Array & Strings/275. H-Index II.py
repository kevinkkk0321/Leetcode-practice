class Solution(object):
    def hIndex(self, citations):
        """
        :type citations: List[int]
        :rtype: int
        """
        n = len(citations)
        left, right = 0, n - 1

        while left<=right:
            mid = left + (right-left)//2

            if citations[mid] == n - mid:
                return n - mid
            if citations[mid] < n - mid:
                left = mid + 1
            else:
                right = mid - 1
        return n - left


#         # for loop
#         res = 0

#         for i in range(len(citations)):
#             if citations[i] >= len(citations) - i:
#                 return len(citations) - i
#         return 0


        
