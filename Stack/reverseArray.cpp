#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<char> arr = {'H' , 'E' , 'L' , 'L' , 'O'};
    stack<char> st;
    for(int i = 0 ; i < arr.size() ; i++){
        st.push(arr[i]);
    }
    vector<char> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    for(char i : ans){
        cout << i << " ";
    }
    return 0;
}