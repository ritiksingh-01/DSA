#include <iostream>
using namespace std ;
void printArray(int arr[], int size){
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}

void sort01(int arr[], int size ){
    int left = 0 , right = size -1 ;
    while (left < right){
        while (arr [left]==0 ){
            left++;
        }
        while (arr[right]== 1){
            right --;
        }
        if (left < right){
        swap(arr[left],arr[right]);
        left ++;
        right --;
        }
    }
}
int main (){
int arr [16] = {1,1,0,0,0,0,1,0,0,1,0,0,1,1,0,0};
sort01(arr , 16);
printArray(arr , 16);
    return 0 ;
}