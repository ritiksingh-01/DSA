#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int> &arr , int k ){
    vector<int> temp(arr.size());
    for(int i = 0 ; i< arr.size() ; i++){
        temp[(i+k)%arr.size()] = arr[i];
    }
    arr = temp;
}

int main (){

vector <int> arr = {1,7,9,11};
int k = 2;
rotate(arr , k);
cout << "Array after rotate : " << "{";
for (int i : arr){
    cout << i << ",";
}cout<<"}";
    return 0;
}