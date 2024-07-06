#include<iostream>
using namespace std;

void print(int arr[] , int n , int start = 0 ){ // start is default args
    for(int i = start ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {1,2,3,4,5};
    int size = 5;
    print(arr,size,3);
    print(arr,size);
    return 0;
}