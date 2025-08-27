#include <bits/stdc++.h>
using namespace std;

//  tc = O(n2)

int timeRequiredToBuy(vector<int> &tickets, int k)
{
    queue<int> q;
    for (int i = 0; i < tickets.size(); i++)
    {
        q.push(i);
    }
    int time = 0;
    while (tickets[k] != 0)
    {
        tickets[q.front()]--;
        if (tickets[q.front()])
        {
            q.push(q.front());
        }
        q.pop();
        time++;
    }
    return time;
}

// tc = O(n)
int timeRequiredToBuy2(vector<int> &tickets, int k)
{
    int time = 0;
    for (int i = 0; i < tickets.size(); i++)
    {
        if (i <= k)
            time += min(tickets[k], tickets[i]);
        else
            time += min(tickets[k] - 1, tickets[i]);
    }
    return time;
}

int main()
{
    vector<int> arr = {1, 5, 2, 3, 7};
    int k = 2;
    cout << "Time require for the " << k << " position is " << timeRequiredToBuy(arr, k) << " sec." << endl;
    cout << "Time require for the " << k << " position is " << timeRequiredToBuy2(arr, k) << " sec." << endl;

    return 0;
}