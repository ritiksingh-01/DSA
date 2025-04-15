#include<bits/stdc++.h>
using namespace std;
int countSum(vector<int> & arr , int i , int n , int target){
    if(i==n){
        return target==0;
    }
    return countSum(arr,i+1 , n , target) + countSum(arr, i+1 , n , target-arr[i]);
}
int perfectSum(vector<int>& arr, int target) {
    // code here
    int n = arr.size();
    return countSum(arr,0,n,target);
}

int main(){
    vector<int> arr = {5, 2, 3, 10, 6, 8};
    int  target = 10 ;
    cout << perfectSum(arr,target) << endl;
    return 0;
}