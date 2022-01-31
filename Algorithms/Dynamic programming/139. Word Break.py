class Solution(object):
    def wordBreak(self, s, wordDict):
        """
        :type s: str
        :type wordDict: List[str]
        :rtype: bool
        """
        # DP
        dp = [False] * (len(s)+1)
        dp[0] = True

        for i in range(1, len(s)+1):
            for j in range(i):
                if dp[j] and s[j:i] in wordDict:
                    dp[i] = True
        return dp[-1]


#         # BFS
#         queue = deque()
#         queue.append(0)
#         visited = set()

#         while queue:
#             start = queue.popleft()
#             if start in visited:
#                 continue
#             for end in range(start+1,len(s)+1):
#                 if s[start:end] in wordDict:
#                     queue.append(end)
#                     if end == len(s):
#                         return True
#             visited.add(start)
#         return False


#         # brute force
#         def wordRecur(sub_s, wordDict, start):
#             if start == len(sub_s):
#                 return True
#             for end in range(start+1, len(sub_s)+1):
#                 if sub_s[start:end] in wordDict and wordRecur(sub_s, wordDict, end):
#                     memo.append(start)
#                     return True
#             return False

#         return wordRecur(s, wordDict, 0)
                    
