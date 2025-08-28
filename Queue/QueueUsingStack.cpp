#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    stack<int> st;
    stack<int> st2;
    MyQueue() {}

    void push(int x) { st.push(x); }

    int pop()
    {
        if (empty())
            return 0;
        if (!st2.empty())
        {
            int ele = st2.top();
            st2.pop();
            return ele;
        }
        else
        {
            while (!st.empty())
            {
                st2.push(st.top());
                st.pop();
            }
            int ele = st2.top();
            st2.pop();
            return ele;
        }
    }

    int peek()
    {
        if (empty())
            return 0;
        if (!st2.empty())
        {
            return st2.top();
        }
        else
        {
            while (!st.empty())
            {
                st2.push(st.top());
                st.pop();
            }
            return st2.top();
        }
    }

    bool empty() { return st.empty() && st2.empty(); }
};

int main()
{
    MyQueue q;
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.push(6);
    cout << q.pop() << endl;
    cout << q.peek() << endl;
    return 0;
}