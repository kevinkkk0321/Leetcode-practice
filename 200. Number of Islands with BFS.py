class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        if grid is None:
            return 0
        row = len(grid)     
        if row == 0:
            return 0
        col = len(grid[0])   
        count = 0        
                  
        for i in range(row):
            for j in range(col):
                  if grid[i][j] == '1':
                        grid[i][j] = '0'
                        self.bfs_helper(i, j, row, col, grid)    
                        count += 1    
        return count
                                
    def bfs_helper(self, i, j, row, col, grid):
        runrow = [1, 0, -1, 0]
        runcol = [0, 1, 0, -1]
        queue = [(i, j)]
        while len(queue):
            x_temp = queue[0][0]
            y_temp = queue[0][1]
            queue.pop(0)
            for k in range(4):
                x = x_temp + runrow[k]
                y = y_temp + runcol[k]
                if x>=0 and x<row and y >=0 and y<col and grid[x][y]=='1':
                    grid[x][y] = '0'
                    queue.append((x, y))
            
                        
                  
                  
                  