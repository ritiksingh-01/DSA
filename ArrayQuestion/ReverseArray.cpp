#include<iostream>
#include<vector>
using namespace std ;
vector<int> reverse(vector<int> &arr){
    int s = 0;
    int e = arr.size() - 1 ;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}
int main (){
vector<int> arr = {11,7,3,12,4};
vector <int> ans = reverse(arr);
for (int i : arr){
    cout << i << " ";
}
    return 0;
}