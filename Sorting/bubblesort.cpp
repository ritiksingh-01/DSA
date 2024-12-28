#include<iostream>
#include<vector>
using namespace std;
//  approach 1
void bubbleSort(vector<int> &arr , int size ){
    for(int i = 1 ; i < size ; i++){

        for(int j = 0 ; j<size-i ; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
// approach 2 

void bubblesort2(vector<int> &arr , int n){
    int didswap = 0;
    for(int i = n -1 ; i >= 1 ; i--){
        for(int j = 0 ; i <= i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
    }
}
int main (){
vector<int> arr = {2,5,1,4,5};
int size = arr.size();
bubbleSort(arr,size);

cout << "Sorted Array using 1 approach : ";
for (int i : arr){
    cout << i <<" ";
}
cout << endl;
vector<int> arr1 = {1,2,3,4,5,6};
bubblesort2(arr, size);
cout << "Sorted Array using 2 approach : ";
for (int i : arr){
    cout << i <<" ";
}
    return 0;
}