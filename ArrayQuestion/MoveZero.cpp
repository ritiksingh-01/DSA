#include<iostream>
#include<vector>
using namespace std ;
void moveZero(vector<int> &arr ,int size){
    int i = 0 ;
    for(int j = 0 ; j < size ; j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }

}

int main (){
vector<int> arr = {0,1,0,3,12,0,6,7};
moveZero(arr , 8);
for(int i = 0 ; i<8 ; i++){
    cout << arr[i] << " ";
}
    return 0;
}