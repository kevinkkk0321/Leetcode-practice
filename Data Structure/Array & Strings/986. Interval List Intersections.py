class Solution(object):
    def intervalIntersection(self, firstList, secondList):
        """
        :type firstList: List[List[int]]
        :type secondList: List[List[int]]
        :rtype: List[List[int]]
        """

        res = []
        i, j = 0, 0
        while i < len(firstList) and j < len(secondList):
            low = max(firstList[i][0], secondList[j][0])
            hi = min(firstList[i][1], secondList[j][1])

            if low <= hi:
                res.append([low, hi])

            if firstList[i][1] < secondList[j][1]:
                i += 1
            else:
                j += 1

        return res
                
