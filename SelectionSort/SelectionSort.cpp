#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &arr , int size){
    for(int i = 0 ; i < size - 1 ; i++){
        int minIndex = i;
        for (int j = i+1 ; j < size ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j ;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}


int main (){
vector <int> arr = {64, 25, 12, 22, 11};
int size = arr.size();
selectionSort(arr , size);
cout <<"Sorted array : ";
for (int i : arr){
    cout << i << " ";
}
    return 0;
}