class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        if grid is None:
            return 
        row = len(grid)
        if row == 0:
            return 0
        col = len(grid[0])
        count = 0
        
        for i in range(row):
            for j in range(col):
                if grid[i][j] == '1':
                    self.dfs_helper(i, j, grid, row, col)
                    count += 1
        return count
    
    
    def dfs_helper(self, i, j, grid, row, col):
        if i>= row or i<0 or j>=col or j<0 or grid[i][j] == '0':
            return
        grid[i][j] = '0'
        self.dfs_helper(i+1, j, grid, row, col)
        self.dfs_helper(i-1, j, grid, row, col)
        self.dfs_helper(i, j+1, grid, row, col)
        self.dfs_helper(i, j-1, grid, row, col)
        