class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        pascal = []

        for i in range(numRows):
            row = [0]*(i+1)
            row[0] = row[-1] =  1

            for j in range(1, i):
                row[j] = pascal[i-1][j-1] + pascal[i-1][j]
            pascal.append(row)
        return pascal

        
