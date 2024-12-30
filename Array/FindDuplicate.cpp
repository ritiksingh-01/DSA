#include<iostream>
using namespace std ;

int  findDuplicate(int arr[], int size ){
int ans = 0;
// XOR ing all array element 
for (int i = 0 ; i < size ; i++){
    ans ^= arr[i];
}
// XOR [ 1 , n-1]
for (int i = 1 ; i < size; i++){
    ans ^= i;
    
}
return ans ;

}

int main (){

// int arr[5] = {1,2,3,4,4};
// int arr[5] = {3,3,3,3,3};
// int arr[10] = {2,5,9,6,9,3,8,9,7,1};
int arr[3] = {1,1,1};
int result = findDuplicate(arr , 3);
cout << result ;

    return 0 ;
}