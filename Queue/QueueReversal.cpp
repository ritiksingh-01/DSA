#include<bits/stdc++.h>
using namespace std;

void reverseUsingArray(queue<int> &q){
    int n = q.size();
    vector<int> ans;
    while(n--){
        ans.push_back(q.front());
        q.pop();
    }
    reverse(ans.begin() , ans.end());
    for(int i : ans){
        q.push(i);
    }
    n = q.size();
    cout << "Reverse using array : " ;
    while(n--){
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}
void reverseUsingStack(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    int n = q.size();
    cout << "Reverse using stack : " ;
    while(n--){
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(6);
    // reverseUsingArray(q);
    reverseUsingStack(q);
    cout << endl << q.size() << endl;
    return 0;
}