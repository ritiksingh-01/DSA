#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited) {
    if (temp.size() == arr.size()) {
        ans.push_back(temp);
        return;
    }
    
    for (int i = 0; i < visited.size(); i++) {
        if (!visited[i]) {
            visited[i] = true;
            temp.push_back(arr[i]);
            permutation(arr, ans, temp, visited);
            visited[i] = false;
            temp.pop_back();
        }
    }
}

void permutationsOptimal(vector<int> &arr, vector<vector<int>> &ans,int index) {
    if (index == arr.size()) {
        ans.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++) {
        swap(arr[i] , arr[index]);
        permutationsOptimal(arr , ans , index+1);
        swap(arr[i] , arr[index]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(arr.size(), false);
    permutation(arr, ans, temp, visited);
    cout << "Using brute force : " << endl;
    for (const auto &subset : ans) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    cout << "Using optimal approach : " << endl ;
    vector<vector<int>> ans2 ;
    permutationsOptimal(arr,ans2,0);

    for (const auto &subset : ans2) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}