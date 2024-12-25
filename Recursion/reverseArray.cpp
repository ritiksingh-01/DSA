#include<bits/stdc++.h>
using namespace std;


void rev(vector<int> &arr , int i , int n){
    if(i>=n/2){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    rev(arr,i+1,n);
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    rev(arr,0,n);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}