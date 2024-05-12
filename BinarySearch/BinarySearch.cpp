#include<iostream>
using namespace std ;
int binarySearch(int arr[],int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start )/2;
    while (start <=end){
        if (arr[mid]==key){
            return mid;
        }
        else if (key > arr[mid]){
            start = mid+1;
        }
        else {
            start = mid -1;
        }
        mid = start + (end - start )/2;
    }
    return -1;
}


int main (){

int arr [6] = {1,4,5,7,3,8};
int key = 8;
int index =binarySearch(arr , 6 ,key);
cout << index;
    return 0;
}