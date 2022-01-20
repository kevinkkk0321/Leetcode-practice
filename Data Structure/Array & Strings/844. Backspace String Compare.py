class Solution(object):
    def backspaceCompare(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        def back(string):
            res = []

            for c in string:
                if c == '#':
                    if res:
                        res.pop()
                else:
                    res.append(c)
            return "".join(res)

        return back(s) == back(t)
