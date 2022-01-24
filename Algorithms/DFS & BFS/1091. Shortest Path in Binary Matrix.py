class Solution(object):
    def shortestPathBinaryMatrix(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        row, col = len(grid), len(grid[0])

        if grid[0][0] != 0 or grid[row-1][col-1] != 0:
            return -1

        dequeNode = deque()
        dequeNode.append([0,0])
        steps = [[1,0], [-1,0], [0,1], [0,-1], [1,1], [1,-1], [-1,1], [-1,-1]]
        path = 0

        while dequeNode:
            path += 1
            size = len(dequeNode)
            for i in range(size):
                x, y = dequeNode.popleft()
                if x==row-1 and y==col-1:
                    return path
                for step in steps:
                    if x+step[0]<0 or x+step[0]>=row or y+step[1]<0 or y+step[1]>=col or grid[x+step[0]][y+step[1]]==1 :
                        continue
                    grid[x+step[0]][y+step[1]] = 1
                    dequeNode.append([x+step[0], y+step[1]])
        return -1
