#include<iostream>
#include<vector>
using namespace std;
int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int cols = grid[0].size();

        for(int i = 1 ; i < row ; i++){
            grid[i][0] += grid[i-1][0];
        }
        for(int j = 1 ; j < cols ; j++){
            grid[0][j] += grid[0][j-1];
        }
        for(int i = 1 ; i < row ; i++){
            for(int j = 1 ; j <cols ; j++){
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[row -1][cols-1];
}


int main(){
    vector<vector<int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
    int n = grid.size();
    int m = grid[0].size();
    cout << "Array : " << endl;
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << grid[i][j] << " ";
    }
    cout << endl;
    }
    int minSum = minPathSum(grid);
    cout << minSum;
    return 0;
}