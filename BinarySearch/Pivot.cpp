#include<iostream>
using namespace std ;

int getPivot(int arr[],int size){
    int s = 0 ;
    int e = size -1 ;
    int mid = s + (e-s)/2;
    while (s<e){
        if (arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else {
            e = mid ;
        }
       mid = s + (e-s)/2; 
    }
    return s;
}

int main (){
int arr [5] = {7,9,1,2,3};
// int arr[5];
// for (int i = 0 ; i < 5 ; i++){
//     cin >> arr[i];
// }
int pivot = getPivot(arr , 5);
cout << "Pivot element index is : "<< pivot;
    return 0;
}