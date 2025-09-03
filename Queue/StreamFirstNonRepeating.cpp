#include <bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string &s)
{
    // Code here
    string ans = "";
    vector<int> r(26, 0);
    queue<char> q;

    for (int i = 0; i < s.size(); i++)
    {
        r[s[i] - 'a']++;
        q.push(s[i]);

        while (!q.empty() && r[q.front() - 'a'] > 1)
        {
            q.pop();
        }

        if (q.empty())
        {
            ans += '#';
        }
        else
        {
            ans += q.front();
        }
    }

    return ans;
}

int main()
{
    string s = "aabc";
    cout << FirstNonRepeating(s);
    return 0;
}