#include<iostream>
#include<algorithm>
using namespace std;

int kthSmallest(int arr[] , int k , int l , int r){
    sort(arr + l , arr + r + 1);
    return arr[l+k - 1];
}


int main(){
int arr[] = {7,10,4,3,20,15};
int l = 0 , r = 5 ;
int k = 3 ;
cout << k <<" smallest element is "<< kthSmallest(arr , 3 , 0 ,5);
    return 0;
}