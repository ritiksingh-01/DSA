#include <iostream>
using namespace std;

int pairSum(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == num) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                return 1; 
            }
        }
    }
    return 0; 
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int num = 5;
    int result = pairSum(arr, 5, num);
    return 0;
}
