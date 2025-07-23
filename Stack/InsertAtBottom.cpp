#include <bits/stdc++.h>
using namespace std;

stack<int> insertAtBottom(stack<int> st, int x) {
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    return st;
}

int main() {
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(8);

    int x = 2;
    stack<int> result = insertAtBottom(st, x);
    while (!result.empty()) {
        cout << result.top() << " ";
        result.pop();
    }
    return 0;
}