#include<bits/stdc++.h>
using namespace std;

stack<int> st; 
stack<int> s;  

void push(int val) {
    st.push(val);
    if (s.empty()) {
        s.push(val);
    } else {
        s.push(max(val, s.top()));
    }
}

void pop() {
    if (!st.empty()) {
        st.pop();
        s.pop();
    }
}

int top() {
    return st.empty() ? -1 : st.top();
}

int getMax() {
    return s.empty() ? -1 : s.top();
}
int main() {
    push(5);
    push(3);
    push(7);
    push(2);

    cout << "Top element: " << top() << endl;
    cout << "Maximum element: " << getMax() << endl;

    pop();
    cout << "After popping one element..." << endl;
    cout << "Top element: " << top() << endl;
    cout << "Maximum element: " << getMax() << endl;

    pop();
    pop();
    cout << "After popping two more elements..." << endl;
    cout << "Top element: " << top() << endl;
    cout << "Maximum element: " << getMax() << endl;

    return 0;
}