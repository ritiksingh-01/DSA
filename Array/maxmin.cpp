#include<iostream>
using namespace std ;
int getmax(int arr[], int size ){
    int maxi = INT_MIN;
    for (int i = 0 ; i< size ; i++){
        // if (arr[i]>max){
        //     max = arr[i];
        // }
        maxi = max (maxi , arr[i]);
    }
    return maxi ;
}
int getmin(int arr[], int size ){
    int mini = INT_MAX;
    for (int i = 0 ; i< size ; i++){
        // if (arr[i]<min){
        //     min = arr[i];
        // }
        mini = min (mini , arr[i]);
    }
    return mini ;
}
int main (){

int size ;
cin >> size ;
int arr[100];
for (int i = 0 ; i < size ; i++){
    cin >> arr[i];
}
cout << "Maximum value is :"<< getmax(arr , size) << endl << "Minimum value is :"<< getmin(arr , size)<<endl ;
    return 0 ;
}