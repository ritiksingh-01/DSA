#include<iostream>
#include<vector>
using namespace std ;
bool check(vector<int> &arr){
    int count = 0; 
    for (int i = 0 ; i < arr.size();i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[arr.size() - 1] > arr[0]){
        count++;
    }
    return count <= 1;
}
int main (){
vector <int> arr = {3,4,5,1,2};
cout << check(arr);

    return 0;
}