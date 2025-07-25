#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t)
{
    stack<char> s1, s2;
    for (char c : s)
    {
        if (c != '#')
        {
            s1.push(c);
        }
        else if (!s1.empty())
        {
            s1.pop();
        }
    }

    for (char c : t)
    {
        if (c != '#')
        {
            s2.push(c);
        }
        else if (!s2.empty())
        {
            s2.pop();
        }
    }

    return s1 == s2;
}

int main()
{
    string str1 = "ab#c";
    string str2 = "ad#c";
    bool res = backspaceCompare(str1, str2);
    cout << "Are strings equal after applying backspaces? "
         << (res ? "Yes" : "No") << endl;
    return 0;
}