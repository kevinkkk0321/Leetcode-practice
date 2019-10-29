class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0)
            return false;
        if(matrix[0].size() == 0)
            return false;

        int row = 0;
        int column = matrix[0].size()-1;

        while(row<matrix.size() && column>=0){
            if( target < matrix[row][column])
                --column;
            else if( target > matrix[row][column])
                ++row;
            else
                return true;
        }
        return false;
    }
};
