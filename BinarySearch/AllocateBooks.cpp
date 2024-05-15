#include<iostream>
using namespace std ;
int isPossible(int arr[],int size , int m , int mid){
    int studentCount = 1 ;
    int pageSum = 0;
    for (int i = 0 ; i < size ; i++)
    if (pageSum + arr[i]<=mid){
        pageSum += arr[i];
    }
    else {
        studentCount ++ ;
        if (studentCount > m || arr[i] > mid){
            return false ;
        }
        pageSum = arr[i];
    }
    return true ;
}
int allocateBook(int arr[],int size ,int m){
    int s = 0;
    int sum = 0;
    for (int i = 0 ; i <size ; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s)/2;
    while (s <= e){
        if (isPossible(arr , size , m , mid)){
            ans = mid ;
            e = mid - 1 ;
        }
        else {
            s = mid + 1 ;
        }
        mid = s + (e-s)/2;
    }
    return ans ;
}
int main (){
int arr[4] = {10,20,30,40};
int m = 2;
int result = allocateBook(arr , 4 , m);
cout <<"No. of books allocated per student : " << result ;

    return 0;
}