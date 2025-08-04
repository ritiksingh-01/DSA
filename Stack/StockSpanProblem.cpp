#include <bits/stdc++.h>
using namespace std;

void calculateSpan(vector<int> &arr)
{
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n, 1);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            ans[st.top()] = st.top() - i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        ans[st.top()] = st.top() + 1;
        st.pop();
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> arr = {100, 80, 60, 70, 60, 75, 85};
    calculateSpan(arr);
    return 0;
}