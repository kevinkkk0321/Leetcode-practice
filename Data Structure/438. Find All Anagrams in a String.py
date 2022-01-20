class Solution(object):
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        ls = len(s)
        lp = len(p)

        p_count = Counter(p)
        s_count = Counter()
        i = 0
        res = []

        for i in range(ls):
            s_count[s[i]] += 1

            if i >= lp:
                if s_count[s[i - lp]] == 1:
                    del s_count[s[i - lp]]
                elif s_count[s[i - lp]] > 1:
                    s_count[s[i - lp]] -= 1

            if p_count == s_count:
                res.append(i-lp+1)

        return res
                
