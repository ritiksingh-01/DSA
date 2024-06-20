#include<iostream>
#include<vector>
using namespace std;
int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int cols = grid[0].size();
        int sum = 0;
        // for(int i = 0 ; i < row ; i++){
        //     for(int j = 0 ; j < i ; j++){
        //         sum += grid[i][j];
        //     }
        // }
        int i = 0 , j = 0;
        while( i < row){
            sum += grid[i][j];
            j++;
        }
        i = 1;
        j=0;
        while(j < cols){
            sum += grid[i][j];
            j++;
        }
        return sum;
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