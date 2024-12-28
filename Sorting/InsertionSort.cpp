#include<iostream>
#include<vector>
using namespace std;

// approach 1
void insertionSort(vector<int> &arr, int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = temp;
    }
}
//  approach 2
void insertionSort2(vector<int> &arr, int n) {
    for(int i = 0 ; i<= n-1 ; i++){
        int j = i;
        while(j > 0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main() {
    vector<int> arr = {2, 5, 1, 4, 5};
    int size = arr.size();
    insertionSort(arr, size);
    cout << "Sorted Array using approach 1 : ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    insertionSort2(arr, size);
    cout << "Sorted Array using approach 2 : ";
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}