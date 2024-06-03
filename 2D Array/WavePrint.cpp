#include<iostream>
#include<vector>
using namespace std;
vector <int> wavePrint(vector<vector<int>> arr , int n , int m){
    vector <int> ans;
    for(int j = 0 ; j < m ; j++){

        if(j&1){
            for(int i = n -1 ; i >= 0 ; i--){
                ans.push_back(arr[i][j]);
            }
        }
        else{
            for(int i = 0 ; i < n ; i++){
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}
int main(){
int n = 3, m = 4;
vector<vector<int>> arr(n, vector<int>(m));
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
    }
}

cout << "Array is :" << endl;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
cout << "Wave order is : " << endl ;
vector <int> ans = wavePrint(arr , 3 ,4);
for(int i : ans){
    cout<< i << " ";
}
    return 0;
}