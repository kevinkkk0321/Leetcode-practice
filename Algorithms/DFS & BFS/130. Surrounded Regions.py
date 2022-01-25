class Solution(object):
    def solve(self, board):
        """
        :type board: List[List[str]]
        :rtype: None Do not return anything, modify board in-place instead.
        """
        def dfs(board, i, j):
            if i>=row or i<0 or j>=col or j<0:
                return
            if board[i][j] == 'X' or board[i][j] == '#':
                return
            if board[i][j] == 'O':
                board[i][j] = '#'
            dfs(board, i+1, j)
            dfs(board, i-1, j)
            dfs(board, i, j+1)
            dfs(board, i, j-1)

        row, col = len(board), len(board[0])
        for i in range(row):
            for j in range(col):
                if i == 0 or j == 0 or i == row-1 or j == col-1:
                    dfs(board, i, j)

        for i in range(row):
            for j in range(col):
                if board[i][j] == 'O':
                    board[i][j] = 'X'
                if board[i][j] == '#':
                    board[i][j] = 'O'
        return board
    
