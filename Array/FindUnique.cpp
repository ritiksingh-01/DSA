#include<iostream>
using namespace std ;

int  findUnique(int arr[ ], int size ){
int ans = 0;
for (int i = 0 ; i < size ; i++){
    ans = ans ^ arr[i];
}
return ans ;
}

int main (){

int arr [5] = {1,3,4,1,3};
int result = findUnique(arr , 5);
cout << result ;

    return 0 ;
}