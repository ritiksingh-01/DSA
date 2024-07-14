#include<iostream>
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
}