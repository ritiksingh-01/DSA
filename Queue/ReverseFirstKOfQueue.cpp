#include <bits/stdc++.h>
using namespace std;

void reverseFirstK(queue<int>& q, int k) {
    if (q.empty() || k > q.size() || k <= 0) return;

    stack<int> st;
    for (int i = 0; i < k; ++i) {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    int rem = q.size() - k;
    for (int i = 0; i < rem; ++i) {
        q.push(q.front());
        q.pop();
    }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(6);

    reverseFirstK(q, 3);

    return 0;
}