#include<bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr,int n) {
    int largest = arr[0];
    int SecondLargest = -1;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > largest){
            SecondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > SecondLargest){
            SecondLargest = arr[i];
        }
    }
    return SecondLargest;
}
int main(){

    vector<int> arr = {1,2,3,4,5,6,6};
    int n = arr.size();
    cout << getSecondLargest(arr,n);
    return 0;
}