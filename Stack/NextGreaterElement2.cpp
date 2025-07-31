#include<bits/stdc++.h>
using namespace std;


void nextGreaterElement(vector<int> & arr){
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n , -1) ;
    for(int i = 0 ; i < 2 * n  ; i++){
        while (!st.empty() && arr[st.top()] < arr[i % n]){
            ans[st.top()] = arr[i % n];
            st.pop();
        }
        if(i < n)
        st.push(i);
    }

    for(int i : ans){
        cout << i << " " ;
    }
}


int main(){

    vector<int> arr = {1,2,3,4,3};
    nextGreaterElement(arr);
    return 0;
}