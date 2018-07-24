int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridRowSize, int obstacleGridColSize) {
    int nums[100];
    int row,col;
    row = obstacleGridRowSize-1;

    for(col = obstacleGridColSize-1;col>=0;col--){
        if(col+1<obstacleGridColSize)
            nums[col] = nums[col+1];
        else{
            nums[col] = 1;
        }    
        if(obstacleGrid[row][col])
            nums[col] = 0;
    }
    for(row = obstacleGridRowSize-2;row>=0;row--){
        for(col = obstacleGridColSize-1;col>=0;col--){
            int right = 0;
            if(col+1<obstacleGridColSize)
                right = nums[col+1];
            nums[col] += right;
            if(obstacleGrid[row][col])
                nums[col] = 0;
        }
    }
    return nums[0];
}