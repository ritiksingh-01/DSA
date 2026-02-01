#include<bits/stdc++.h>
using namespace std;


// better solution

int subArray(vector<int> arr , int n , int k){
    int l = 0 , r = 0 , sum = 0 , maxLen = 0;
    while(r < n){
        sum  = sum + arr[r];
        while(sum > k){
            sum = sum - arr[l];
            l++;
        }
        if(sum <= k){
            maxLen = max(maxLen , r - l + 1);
            r++;
        }
    }
    return maxLen;
}

// optimal solution

int subArray1(vector<int> arr , int n , int k){
    int l = 0 , r = 0 , sum = 0 , maxLen = 0;
    while(r < n){
        sum  = sum + arr[r];
        if(sum > k){
            sum = sum - arr[l];
            l++;
        }
        if(sum <= k){
            maxLen = max(maxLen , r - l + 1);
            r++;
        }
    }
    return maxLen;
}


int main(){


    int n , k;
    cin >> n;
    cin >> k;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int len = subArray(arr, n , k);
    cout << len << endl;

    return 0;

}