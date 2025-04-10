#include <bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> &arr, int i, int n, vector<int> &ans, vector<int> temp) {
    if (i == n) {
        int sum = 0;
        for(int i : temp){
            sum +=i ;
        }
        ans.push_back(sum);
        return;
    }
    subsetSum(arr, i + 1, n, ans, temp);  // NO
    temp.push_back(arr[i]);
    
    subsetSum(arr, i + 1, n, ans, temp); // Yes
}

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    vector<int> ans;
    vector<int> temp;
    
    subsetSum(arr, 0, n, ans, temp);
    sort(ans.begin() , ans.end());
    for(int i : ans){
        cout << i <<  " " ;
    }
    
    return 0;
}