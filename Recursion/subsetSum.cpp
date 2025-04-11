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


void subsetSum2(vector<int> &arr, int i, int n, vector<int> &ans,int sum) {
    if (i == n) {
        ans.push_back(sum);
        return;
    }
    subsetSum2(arr, i + 1, n, ans, sum);  // NO
    sum += arr[i];
    subsetSum2(arr, i + 1, n, ans, sum); // Yes
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
    cout << endl;
    int  sum = 0;
    vector<int> ans2;
    subsetSum2(arr, 0, n, ans2, sum);
    sort(ans2.begin() , ans2.end());
    for(int i : ans2){
        cout << i <<  " " ;
    }
    
    return 0;
}