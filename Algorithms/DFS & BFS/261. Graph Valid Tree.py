class Solution(object):
    def validTree(self, n, edges):
        """
        :type n: int
        :type edges: List[List[int]]
        :rtype: bool
        """
        dic = {i: [] for i in xrange(n)}
        for i, j in edges:
            dic[i].append(j)
            dic[j].append(i)
        stack = [dic.keys()[0]]
        visited = []
        while stack:
            node = stack.pop()
            if node in visited:
                return False
            visited.append(node)
            for neighbour in dic[node]:
                stack.append(neighbour)
                dic[neighbour].remove(node)
            dic.pop(node)
        return not dic

        # DFS with recursive
        if len(edges) != n - 1: return False
        adj_list = [[] for _ in range(n)]

        for i, j in edges:
            adj_list[i].append(j)
            adj_list[j].append(i)
        visited = []

        def dfs(node):
            if node in visited:
                return
            visited.append(node)
            for neighbor in adj_list[node]:
                dfs(neighbor)
        dfs(0)
        return len(visited)==n
        
