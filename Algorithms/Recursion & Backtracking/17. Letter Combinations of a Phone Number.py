# Backtracking

class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """

        if len(digits)==0:
            return

        letters = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
        result = []
        self.backtracking(digits, letters, 0, "", result)
        return result

    def backtracking(self, digits, letters, l, tmp, result):
        if len(tmp)>=len(digits):
            result.append(tmp)
            return
        for c in letters[int(digits[l])]:
            self.backtracking(digits, letters, l+1, tmp+c, result)
        
