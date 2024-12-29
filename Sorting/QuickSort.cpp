#include<bits/stdc++.h>
using namespace std;
//  in case of pivot == low

int partition1(vector<int> &arr, int low , int high){
    int pivot = arr[low];
    int i = low , j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;

}


// in case pivot == high

int partition2(vector<int> &arr, int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1; 
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++; 
            swap(arr[i], arr[j]); 
        }
    }
    swap(arr[i + 1], arr[high]); 
    return i + 1; 
}
void quickSort(vector<int> &arr,int low , int high){
    if(low < high){
        int pi = partition2(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main(){
vector<int> arr = {2,5,1,4,5};
int n = arr.size();
quickSort(arr,0,n-1);
cout << "Sorted Array is : ";
for (int i : arr){
    cout << i <<" ";
}
}