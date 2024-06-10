#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralPrint(vector<vector<int>> matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0 ;
    int total = row*col;

    vector <int> ans;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1 ;
    int endingCol = col - 1;
    while( count < total){

        for (int i = startingCol ;count < total && i <= endingCol ; i++){
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        for(int i = startingRow ;count < total && i <= endingRow ; i++){
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        for(int i = endingCol ;count < total && i >= startingCol ; i--){
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        for(int i = endingRow ;count < total && i >= startingRow ; i--){
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}


int main(){
int n = 3, m = 3;
vector<vector<int>> matrix(n, vector<int>(m));
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
    }
}
cout << "Spiral Matrix is : " << endl ;
vector <int> ans = spiralPrint(matrix);
for(int i : ans){
    cout<< i << " ";
}

    return 0;
}