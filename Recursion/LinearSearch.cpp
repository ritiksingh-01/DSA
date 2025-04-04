#include<bits/stdc++.h>
using namespace std;
void print(int *arr , int size){
    cout << "Size of array is : " << size << endl;

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }cout << endl;
}
bool search(int *arr , int size , int n){
    print(arr,size);
    if(size==0)
        return false;
    if(arr[0] == n){
        return true;
    }
    else{
    bool ans = search(arr+1 , size -1 , n);
    return ans;
    }
}
bool linearSearch(vector<int> &arr , int n , int i , int size){
    if(i == size){
        return 0;
    }

    if(n == arr[i]){
        return 1;
    }
    return linearSearch(arr , n , i+1,size);
}
int main(){

    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int n = 4;
    bool ans = search(arr,size,n);
    if(ans){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    vector<int> arr1= {2,3,4,5,6,8,9,10};
    int size1 = arr1.size();
    bool ans1 = linearSearch(arr1,9,0,size1);
    if(ans1){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
}