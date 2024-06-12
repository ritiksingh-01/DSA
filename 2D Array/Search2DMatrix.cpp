#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowIndex = 0;
        int colIndex = col - 1 ;
        while ( rowIndex < row && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];
            if(element == target){
                return 1;
            }
            if(element < target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return 0;
}

int main (){
int n = 5, m = 5;
vector<vector<int>> matrix(n, vector<int>(m));
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
    }
}
int target = 1;
cout <<"Element present or not : " << searchMatrix(matrix , target); 
}