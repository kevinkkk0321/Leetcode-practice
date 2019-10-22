class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string> > result;
        vector<string> temp(n, string(n, '.'));
        setQueens(result, temp, 0, n);
        return result;
    }
private:
    void setQueens(vector<vector<string> >& result, vector<string>& temp, int col, int &n){
        if(col == n){
            result.push_back(temp);
            return;
        }
        /*
        for (int col = 0; col != n; ++col)
            if (isPlaceValid(temp, row, col, n)) {
                temp[row][col] = 'Q';
                setQueens(result, temp, row + 1, n);
                temp[row][col] = '.';
            }
        */

        for(int row = 0; row != n; ++row){
            if(isPlaceValid(temp, row, col, n)){
                temp[row][col] = 'Q';
                setQueens(result, temp, col + 1, n);
                temp[row][col] = '.';
            }
        }
    }

    bool isPlaceValid(vector<string>& temp, int row, int col, int &n){
        /*
        for (int i = 0; i != row; ++i)
            if (temp[i][col] == 'Q')
                return false;
        //check if the 45° diagonal had a queen before.
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
            if (temp[i][j] == 'Q')
                return false;
        //check if the 135° diagonal had a queen before.
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
            if (temp[i][j] == 'Q')
                return false;
        return true;
        */

        //check 水平兩邊
        for(int i = 0; i != col; ++i){
            if(temp[row][i] == 'Q')
                return false;
        }
        //check 左上方
        for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j){
            if(temp[i][j] == 'Q')
                return false;
        }
        //check 左下方
        for(int i = row, j = col; i < n && j >= 0; i++, j--){
            if(temp[i][j] == 'Q')
                return false;
        }


        return true;
    }
};
