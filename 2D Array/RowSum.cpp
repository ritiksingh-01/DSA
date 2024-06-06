#include<iostream>
using namespace std;
void printSum(int arr[][4] , int row , int cols){
    cout << "Row wise sum is :" << endl;
    for(int i = 0 ; i < row ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < cols ; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main(){
int arr[3][4];
for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 4 ; j++){
        cin >> arr[i][j] ;
    }
} 
cout << "Array is : " << endl;
for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 4 ; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl ;
}  

printSum(arr , 3 , 4);
    return 0;
}