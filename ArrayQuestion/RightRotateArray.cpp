#include<bits/stdc++.h>
using namespace std;

// using brute force approach

void Rotatetoright(int arr[], int n, int k)
{
    if (n == 0) return; 
    k = k % n; 
    if (k == 0) return; 
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i]; 
    }
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

// using optimal approach 

void reverse(int arr[], int s , int e){
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void rotateToRight(int arr[] , int n , int k){
    k = k % n;
    reverse(arr, 0 , n-k-1);
    reverse(arr,n-k , n-1);
    reverse(arr,0,n-1);
}
int main (){

int arr[] = {1,2,3,4,5};
int k = 2;
Rotatetoright(arr ,5, k);
// rotateToRight(arr ,5, k);
cout << "Array after right rotate : " << "{";
for (int i : arr){
    cout << i << ",";
}cout<<"}";
    return 0;
}