#include<bits/stdc++.h>
using namespace std;
void nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans(n, -1);
        
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[i] < arr[st.top()]) {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    } 
    for(int  i : ans){
        cout << i << " ";
    }
}

int main(){

    vector<int> arr = {2,1,4,3};
    int n = arr.size();
    nextSmallerElement(arr , n);
}