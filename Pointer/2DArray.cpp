#include<iostream>
using namespace std;

int main(){
    // dynamic memory allocation
    int row ;
    cin >> row;
    int col;
    int **arr = new int *[row];
    for(int i = 0 ; i < row ; i++){
        cin >> col;
        arr[i] = new int[col];
    }

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Array is : " << endl;
    for(int i = 0 ; i < row ; i++){
    for(int j = 0 ; j < col ; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    for(int i = 0 ; i < row ; i++){
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}