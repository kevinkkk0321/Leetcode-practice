class Solution(object):
    def shortestDistance(self, wordsDict, word1, word2):
        """
        :type wordsDict: List[str]
        :type word1: str
        :type word2: str
        :rtype: int
        """
        p1 = p2 = -1
        distance = len(wordsDict)
        for i, word in enumerate(wordsDict):
            if word == word1:
                p1 = i
            if word == word2:
                p2 = i
            if p1 != -1 and p2 != -1:
                distance = min(distance, abs(p2 - p1))
        return distance

        
