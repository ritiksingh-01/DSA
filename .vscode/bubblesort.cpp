#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr , int size ){
    for(int i = 1 ; i < size ; i++){

        for(int j = 0 ; j<size-i ; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main (){
vector<int> arr = {2,5,1,4,5};
int size = arr.size();
bubbleSort(arr,size);
cout << "Sorted Array is : ";
for (int i : arr){
    cout << i <<" ";
}
    return 0;
}