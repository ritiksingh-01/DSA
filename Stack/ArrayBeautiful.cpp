#include<bits/stdc++.h>
using namespace std;

vector<int>  makeArrayBeautiful(vector<int> arr){
    stack<int> st;
    for(int i = 0 ; i < arr.size() ; i++){
        if(st.empty()){
            st.push(arr[i]);
        }else if(arr[i] >= 0 ){
            if(st.top() >= 0){
                st.push(arr[i]);
            }else {
                st.pop();
            }
        }else{
            if(st.top() < 0){
                st.push(arr[i]);
            }else{
                st.pop();
            }
        }
    }
    vector<int> ans(st.size());
    int i = st.size() - 1;
    while(!st.empty()){
        ans[i] = st.top();
        i--;
        st.pop();
    }
    return ans;
}

int main(){
    vector<int> arr = {2,3,5,-4,6,-2,-8,9};
    vector<int> ans = makeArrayBeautiful(arr);

    for(int i : ans){
        cout << i << " ";
    }
    return 0;
}