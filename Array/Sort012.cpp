#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void sort012(int arr[], int size) {
    int left = 0, mid = 0, right = size - 1;

    while (mid <= right) {
        if (arr[mid] == 0) {
            swap(arr[left], arr[mid]);
            left++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { 
            swap(arr[mid], arr[right]);
            right--;
        }
    }
}

int main() {
    int arr[11] = {1,2,1,0,0,2,1, 0, 2, 0, 2};
    sort012(arr, 11);
    printArray(arr, 11);
    return 0;
}
