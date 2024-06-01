#include<iostream>
using namespace std;
void printSum(int arr[][4] , int row , int cols){
    cout << "Column wise sum is :" << endl;
    for(int i = 0 ; i < cols ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < row ; j++){
            sum += arr[j][i];
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