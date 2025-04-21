#include <bits/stdc++.h>
using namespace std;

void permutations(vector<int> &arr, vector<vector<int>> &ans,int index) {
    if (index == arr.size()) {
        ans.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++) {
        swap(arr[i] , arr[index]);
        permutations(arr , ans , index+1);
        swap(arr[i] , arr[index]);
    }
}
void permutationsOptimal(vector<int> &arr, vector<vector<int>> &ans,int index) {
    if (index == arr.size()) {
        ans.push_back(arr);
        return;
    }
    vector<bool> use(21,0);
    for (int i = index; i < arr.size(); i++) {
        if(use[arr[i]+10] == 0){
        swap(arr[i] , arr[index]);
        permutationsOptimal(arr , ans , index+1);
        swap(arr[i] , arr[index]);
        use[arr[i] + 10] = 1;
        }
    }
}

int main() {
    vector<int> arr = {1, 1, 2};
    vector<vector<int>> ans ;
    permutations(arr,ans,0);
    sort(ans.begin(), ans.end()); 
    auto last = unique(ans.begin(), ans.end()); 
    ans.erase(last, ans.end());
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