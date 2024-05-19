#include<iostream>
#include<vector>
using namespace std;

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

int main() {
    vector<int> arr = {2, 5, 1, 4, 5};
    int size = arr.size();
    insertionSort(arr, size);
    cout << "Sorted Array is : ";
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}