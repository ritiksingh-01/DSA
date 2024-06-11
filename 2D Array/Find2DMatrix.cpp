#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int s = 0;
        int e = row*col - 1;
        int mid = s + (e-s)/2;

        while(s<=e){
            int element = matrix[mid/col][mid%col];

            if(element == target){
                return 1;
            }
            if(element < target){
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return 0;
}

int main (){
int n = 4, m = 3;
vector<vector<int>> matrix(n, vector<int>(m));
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
    }
}
int target = 3;
cout <<"Element present or not : " << searchMatrix(matrix , target);
}
