#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr , int s , int e , int k){
    if(s>e)
        return false;

    int mid = s + (e-s)/2;
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k)
        return binarySearch(arr,mid+1,e,k);
    else
        return binarySearch(arr,s,mid-1,k);
    

}

int binary(vector<int> &arr , int s , int e , int x){
    if(s>=e){
        return -1;
    }
    int mid = s + (e-s)/ 2;
    if(arr[mid] == x){
        return mid;
    }else if(arr[mid] > x){
    return binary(arr,s,mid-1,x);
    }
    else{
    return binary(arr,mid+1,e,x);
    }
}

int main(){
    int arr[8] = {1,2,3,4,5,6,7,9};
    int size = 8;
    int n = 5;
    bool ans = binarySearch(arr,0,8,n);
    if(ans){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    vector<int> arr1= {2,3,4,5,7,8,9,12};
    cout << binary(arr1,0,arr1.size(),4);
    return 0;
}