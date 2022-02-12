class Solution(object):
    def maximumGap(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # Bucket sort
        lo, hi, n = min(nums), max(nums), len(nums)
        if n <= 2 or hi == lo:
            return hi - lo
        B = defaultdict(list)
        for num in nums:
            if num == hi:
                ind = n-2
            else:
                ind = (num - lo)*(n-1)//(hi-lo)
            B[ind].append(num)
        maxGap = 0
        cands = []
        for i in range(n-1):
            if B[i]:
                cands.append([min(B[i]), max(B[i])])
        for x,y in zip(cands, cands[1:]):
            maxGap = max(y[0]-x[1], maxGap)
        return maxGap


#         # use hash table cost too many space
#         table = [0]*(max(nums)+1)
#         max_gap = 0
#         gap = 0
#         for num in nums:
#             table[num] = 1

#         for i in range(len(table)):
#             if table[i] == 1:
#                 left = i
#                 break

#         for i in range(left+1, len(table)):
#             if table[i]:
#                 gap = i - left
#                 left = i
#                 max_gap = max(max_gap, gap)
#         return max_gap


        
