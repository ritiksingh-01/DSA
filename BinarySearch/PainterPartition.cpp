#include<iostream>
using namespace std ;
int isPossible (int arr[] , int size , int k , int mid){
    int painterCount = 1 ;
    int partitionSum = 0;
    for (int i = 0 ; i < size ; i++){
    if(partitionSum + arr[i] <= mid){
        partitionSum += arr[i];
    }
    else {
        painterCount ++ ;
        if (painterCount > k || arr[i] > mid){
            return false ;
        }
        partitionSum = arr[i];
    } 
}
return true ;
}
int painterPartition(int arr[], int size , int k ){
    int s = 0 ;
    int sum = 0;
    for (int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    int e = sum ;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
    if (isPossible(arr,size,k,mid)){
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
int arr[4] = {5,5,5,5};
int k = 2 ;
int result = painterPartition(arr , 4 , 2);
cout <<"Total partition b/w 2 painter : " << result ;

    return 0;
}