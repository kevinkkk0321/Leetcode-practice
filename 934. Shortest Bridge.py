class Solution(object):
    def shortestBridge(self, A):
        """
        :type A: List[List[int]]
        :rtype: int
        """
        row = len(A)
        col = len(A[0])
        find_start = False        
        visited = [[0]*col for _ in range(row)]
        queue = collections.deque()
        direction = [(1,0), (0,1), (-1,0), (0,-1)]
        for i in range(row):
            if find_start:
                break
            for j in range(col):
                if A[i][j] == 1:
                    find_start = True
                    self.dfs(A, visited, i, j, queue)
                    break
        step = 0
        while queue:
            for k in range(len(queue)):
                i, j = queue.popleft()
                for d in direction:                       
                    x, y = i + d[0], j + d[1]
                    if 0<=x<row and 0<=y<col:
                        if A[x][y] == 1:
                            return step
                        elif A[x][y] == 0:
                            A[x][y] = 2
                            queue.append((x,y))
                        else:
                            continue
            step += 1
        return step
        
    def dfs(self, A, visited, i, j, queue):
        if visited[i][j]: return    
        row = len(A)
        col = len(A[0])
        visited[i][j] = 1
        direction = [(1,0), (0,1), (-1,0), (0,-1)]
        if A[i][j] == 1:
            queue.append((i, j))       
            A[i][j] = 2
            for d in direction:     
                x, y = i + d[0], j + d[1]
                if 0<=x<row and 0<=y<col:
                    self.dfs(A, visited, x, y, queue)
        
        
        