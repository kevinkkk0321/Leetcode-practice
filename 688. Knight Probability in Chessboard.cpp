class Solution {
public:
    double result[25][25][100] = {};
    double knightProbability(int N, int K, int r, int c) {
        if(r<0 || r>=N || c<0 || c>=N) return 0;
        if (K == 0) return 1.0;
        if(result[r][c][K] > 0) return result[r][c][K];
        result[r][c][K] = 0.125*(knightProbability(N, K-1, r-1, c-2)+
                     knightProbability(N, K-1, r+1, c-2)+
                     knightProbability(N, K-1, r-2, c-1)+
                     knightProbability(N, K-1, r+2, c-1)+
                     knightProbability(N, K-1, r-2, c+1)+
                     knightProbability(N, K-1, r+2, c+1)+
                     knightProbability(N, K-1, r-1, c+2)+
                     knightProbability(N, K-1, r+1, c+2)
                    );
        return result[r][c][K];
    }
};
