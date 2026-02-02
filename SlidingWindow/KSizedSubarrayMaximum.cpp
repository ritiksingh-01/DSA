#include <bits/stdc++.h>
using namespace std;

vector<int> maxOfSubarrays(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> ans;

    if (k == 1) {
        return arr;
    }

    int l = 0;
    while (l + k <= n) {  
        int maxi = INT_MIN;
        for (int i = l; i < l + k; i++) {   
            maxi = max(maxi, arr[i]);
        }
        ans.push_back(maxi);
        l++;
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ans = maxOfSubarrays(arr, k);
    for (int i : ans) {
        cout << i << " ";
    }
    return 0;
}