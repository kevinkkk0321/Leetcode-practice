class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        result = ''

        for i in range(len(s)):

            word_odd = self.checkPalindrome(s, i, i)
            word_even = self.checkPalindrome(s, i, i+1)

            word = word_odd if len(word_odd) >= len(word_even) else word_even

            result = word if len(word)>=len(result) else result
        return result



    def checkPalindrome(self, s, l, r):
        while l>=0 and r<len(s) and s[l]==s[r]:
            l-=1
            r+=1
        return s[l+1:r]
