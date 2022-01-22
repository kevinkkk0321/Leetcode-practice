class Solution(object):
    def findCircleNum(self, isConnected):
        """
        :type isConnected: List[List[int]]
        :rtype: int
        """
        
        def dfs(i):
            visited[i] = 1
            for j in range(len(isConnected)):
                if visited[j] == 0 and isConnected[i][j] == 1:
                    dfs(j)
        
        
        if not isConnected:
            return 0
        
        visited = [0] * len(isConnected)
        count = 0
        
        for i in range(len(isConnected)):
            if visited[i] == 0:
                dfs(i)
                count += 1
        return count
                
