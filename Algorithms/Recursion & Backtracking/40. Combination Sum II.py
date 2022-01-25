class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        res = []
        tmp = []
        used_list = []

        def backtrack(remain, tmp, start):
            if remain < 0:
                return
            if remain == 0:
                res.append(list(tmp))
            for i in range(start, len(candidates)):
                if i>start and candidates[i] == candidates[i-1]:
                    continue
                tmp.append(candidates[i])
                backtrack(remain-candidates[i], tmp, i+1)
                tmp.pop()

        candidates = sorted(candidates)
        backtrack(target, tmp, 0)

        return res
            
