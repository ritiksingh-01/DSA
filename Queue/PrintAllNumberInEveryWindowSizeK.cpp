#include <bits/stdc++.h>
using namespace std;

void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{

    vector<int> arr{3, 6, 2, 8, 9, 7, 11};
    int k = 3;
    queue<int> q;
    int n = arr.size();
    for (int i = 0; i < k - 1; i++)
    {
        q.push(arr[i]);
    }
    for (int i = k - 1; i < n; i++)
    {
        q.push(arr[i]);
        display(q);
        q.pop();
    }
    return 0;
}