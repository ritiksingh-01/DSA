#include<bits/stdc++.h>
using namespace std;

// using brute force approach

void Rotatetoleft(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - k; i++)
  {
    arr[i] = arr[i + k];
  }
  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i - n + k];
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
void rotateToLeft(int arr[] , int n , int k){
    k = k % n;
    reverse(arr, 0 , k-1);
    reverse(arr,k , n-1);
    reverse(arr,0,n-1);
}


int main (){

int arr[] = {1,2,3,4,5};
int k = 2;
// Rotatetoleft(arr ,5, k);
rotateToLeft(arr ,5, k);
cout << "Array after left rotate : " << "{";
for (int i : arr){
    cout << i << ",";
}cout<<"}";
    return 0;
}