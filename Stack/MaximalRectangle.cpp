#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    stack<int> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && heights[st.top()] > heights[i])
        {
            int index = st.top();
            st.pop();
            if (!st.empty())
            {
                ans = max(ans, heights[index] * (i - st.top() - 1));
            }
            else
            {
                ans = max(ans, heights[index] * i);
            }
        }
        st.push(i);
    }
    while (!st.empty())
    {
        int index = st.top();
        st.pop();
        if (!st.empty())
        {
            ans = max(ans, heights[index] * (n - st.top() - 1));
        }
        else
        {
            ans = max(ans, heights[index] * (n));
        }
    }
    return ans;
}

int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &mat, int n, int m)
{
    int ans = 0;
    vector<int> arr(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0)
            {
                arr[j] = 0;
            }
            else
            {
                arr[j] += 1;
            }
        }
        ans = max(ans, largestRectangleArea(arr));
    }
    cout << ans << endl;
}

int main(){
    vector<vector<int>> arr = {{1, 0, 1, 0, 0},
                           {1, 0, 1, 1, 1},
                           {1, 1, 1, 1, 1},
                           {1, 0, 0, 1, 0}};
    int n = arr.size();
    int m = arr[0].size();
    maximalAreaOfSubMatrixOfAll1(arr , n , m);
    return 0;
}