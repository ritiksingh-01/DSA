#include<iostream>
using namespace std;

bool binarySearch(int *arr , int s , int e , int k){
    if(s>e)
        return -1;
    
    int mid = s + (e-s)/2;

    if(arr[mid] < k)
        return binarySearch(arr,mid+1,e,k);
    else
        return binarySearch(arr,s,mid-1,k);
    

}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int n = 4;
}