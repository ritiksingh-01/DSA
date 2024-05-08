#include <iostream>
using namespace std ;

int sumofarray(int arr[], int size ){
int sum = 0;
for (int i = 0 ; i< size ; i++){
    sum = sum + arr[i];
}
return sum ;
}

int main (){
int size;
cin >> size ;
int arr[100];
for (int i = 0 ; i <size ; i++){
 
 cin >> arr[i];
}
cout << "Sum of array is : " << sumofarray(arr , size);
    return 0 ;
}