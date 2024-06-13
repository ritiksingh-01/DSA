#include<iostream>
#include<vector>
using namespace std;  
void rotate(vector<vector<int>>& matrix) {
    int row = matrix.size();
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < i ; j++){
            swap(matrix[i][j] , matrix[j][i]);
        }
    }
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < row/2; j++){
        swap(matrix[i][j], matrix[i][row - 1 -j]);
    }
    }
    
}

int main (){
int n = 3, m = 3;
vector<vector<int>> matrix(n, vector<int>(m));
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
    }
}
cout << " Before rotate : "<< endl;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
cout << "After rotate : " << endl ;
rotate(matrix);
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}