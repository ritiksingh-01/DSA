#include <bits/stdc++.h>
using namespace std;


// time complexity
//  tc = O(n)
// sc = O(n)
void largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    vector<int> r(n);
    vector<int> l(n);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && heights[st.top()] > heights[i])
        {
            r[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        r[st.top()] = n;
        st.pop();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && heights[st.top()] > heights[i])
        {
            l[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        l[st.top()] = -1;
        st.pop();
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, heights[i] * (r[i] - l[i] - 1));
    }
    cout << ans << endl;
}

int main()
{
    vector<int> arr = {2,1,5,6,2,3};
    largestRectangleArea(arr);
    return 0;
}