class Solution(object):
    def exist(self, board, word):
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        if not board:
            return False

        def backtrack(board, word, i, j):
            if len(word)==0:
                return True
            if i==len(board) or j==len(board[0]) or i<0 or j<0 or board[i][j]!=word[0]:
                return False
            tmp = board[i][j]
            board[i][j] = '#'
            ans = backtrack(board, word[1:], i+1, j) or backtrack(board, word[1:], i-1, j)                            or backtrack(board, word[1:], i, j+1) or backtrack(board, word[1:], i, j-1)
            board[i][j] = tmp
            return ans


        for i in range(len(board)):
            for j in range(len(board[0])):
                if backtrack(board, word, i, j):
                    return True
        return False        
