class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        if n==0:
            return []

        result = []

        def backtrack(n, result, tmp, numleft, numright):
            if len(tmp)==n*2:
                result.append(tmp)
                return
            if numleft<n:
                backtrack(n, result, tmp+'(', numleft+1, numright)
            if numleft>numright and numright<n:
                backtrack(n, result, tmp+')', numleft, numright+1)

        backtrack(n, result, '(', 1, 0)
        return result
