class Solution(object):
    def insert(self, intervals, newInterval):
        """
        :type intervals: List[List[int]]
        :type newInterval: List[int]
        :rtype: List[List[int]]
        """

        l, r = newInterval[0], newInterval[1]
        left, right = [], []
        for interval in intervals:
            if interval[1] < l:
                left.append(interval)
            elif interval[0] > r:
                right.append(interval)
            else:
                l = min(l, interval[0])
                r = max(r, interval[1])
        return left + [(l, r)] + right
