#include<bits/stdc++.h>
using namespace std;



int minAddToMakeValid(string s) {
    stack<char> st;
    int cnt = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '('){
            st.push(s[i]);
        }else{
            if(!st.empty()){
                st.pop();
            }else{
                cnt++;
            }
        }
    }
    return st.size()+cnt;
}



int main(){

    string s = "))(()())";
    cout << minAddToMakeValid(s);
    return 0;
}