#include<iostream>
#include<vector>
using namespace std;
int partitionSum(vector<int> &arr){
    int ans = 0;
    for(int i = 0 ; i < arr.size() ; i+=2){
        ans += arr[i];
    }
    return ans;
}
int main(){
    vector <int> arr = {1,4,3,2};
    cout << partitionSum(arr);
}