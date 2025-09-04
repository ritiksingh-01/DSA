#include <bits/stdc++.h>
using namespace std;

queue<int> reverseElements(queue<int> q, int k)
{
    int n = q.size();
    stack<int> st;
    for (int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }

    return q;
}

int main() {
    queue<int> q;
    int k = 3;
    vector<int> input = {1, 2, 3, 4, 5, 6, 7};
    for (int val : input) {
        q.push(val);
    }
    queue<int> result = reverseElements(q, k);
    cout << "Queue after reversing first " << k << " elements:\n";
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;

    return 0;
}