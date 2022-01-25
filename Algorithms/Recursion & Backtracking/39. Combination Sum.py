class Solution(object):
    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        res = []
        tmp = 0
        tmp_list = []

        def backtracking(remain, tmp_list, start):
            if remain < 0:
                return
            if remain == 0:
                res.append(list(tmp_list))
            for i in range(start, len(candidates)):
                tmp_list.append(candidates[i])
                backtracking(remain - candidates[i], tmp_list, i)
                tmp_list.pop()


        backtracking(target, tmp_list, 0)

        return res
        
