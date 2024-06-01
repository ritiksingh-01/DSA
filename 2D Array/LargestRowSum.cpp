#include<iostream>
using namespace std;
int largestRowSum(int arr[][4] , int row , int cols){
    int maxi = INT_MIN;
    int rowIndex = -1;
        for(int i = 0 ; i < row ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < cols ; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
        maxi = sum;
        rowIndex = row;
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
    return rowIndex;
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

int result = largestRowSum(arr , 3 ,4);
cout <<"Row index is : " << result << endl;

    return 0;
}