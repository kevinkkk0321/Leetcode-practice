class Solution(object):
    def allPathsSourceTarget(self, graph):
        """
        :type graph: List[List[int]]
        :rtype: List[List[int]]
        """

        res = []
        target = len(graph)-1

        def backtrack(curNode, path):
            if curNode == target:
                res.append(list(path))
                return
            for nextNode in graph[curNode]:
                path.append(nextNode)
                backtrack(nextNode, path)
                path.pop()

        path = deque([0])
        backtrack(0, path)

        return res
