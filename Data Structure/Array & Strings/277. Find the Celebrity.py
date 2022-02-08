# The knows API is already defined for you.
# @param a, person a
# @param b, person b
# @return a boolean, whether a knows b
# def knows(a, b):

class Solution(object):
    def findCelebrity(self, n):
        """
        :type n: int
        :rtype: int
        """

        candidate = 0

        for i in range(1, n):
            if knows(candidate, i):
                candidate = i

        for i in range(n):
            if i == candidate:
                continue
            if not knows(i, candidate):
                return -1
        for i in range(n):
            if i == candidate:
                continue
            if knows(candidate, i):
                return -1
        return candidate



    # # Brute Force
    # def findCelebrity(self, n):
    #     """
    #     :type n: int
    #     :rtype: int
    #     """
    #     def isCelebrity(i):
    #         for j in range(n):
    #             if i == j:
    #                 continue
    #             if knows(i, j) or not knows(j, i):
    #                 return False
    #         return True
    #     for p in range(n):
    #         if isCelebrity(p):
    #             return p
    #     return -1
        
