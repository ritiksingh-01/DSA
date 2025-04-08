#include <bits/stdc++.h>
using namespace std;

void subset(vector<int> &arr, int i, int n, vector<vector<int>> &ans, vector<int> temp) {
    if (i == n) {
        ans.push_back(temp);
        return;
    }
    subset(arr, i + 1, n, ans, temp);  // NO
    temp.push_back(arr[i]);
    subset(arr, i + 1, n, ans, temp); // Yes
}

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    vector<vector<int>> ans;
    vector<int> temp;
    
    subset(arr, 0, n, ans, temp);

    for (const auto &subset : ans) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    
    return 0;
}