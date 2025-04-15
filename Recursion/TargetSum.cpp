#include <bits/stdc++.h> 
using namespace std;
int targetSum(vector<int> &arr , int i , int target , int n){
    if(target == 0){
        return 1;
    }
    if(i == n || target < 0){
        return 0;
    }
    return targetSum(arr,i+1 , target , n ) + targetSum(arr , i, target - arr[i] , n);
}
int main(){
    vector<int> arr = {2,3,4};
    int target = 4;
    cout << targetSum(arr , 0 , target , 3) << endl;
    return 0;

}
