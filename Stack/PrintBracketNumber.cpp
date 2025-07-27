#include <bits/stdc++.h>
using namespace std;

vector<int> bracketNumbers(string str)
{
    stack<int> st;
    int cnt = 0;
    vector<int> ans;

    for (char c : str)
    {
        if (c == '(')
        {
            ++cnt;
            st.push(cnt);
            ans.push_back(cnt);
        }
        else if (c == ')')
        {
            ans.push_back(st.top());
            st.pop();
        }
    }

    return ans;
}

int main()
{
    string input = "(a+(b*c))+(d/e)";

    vector<int> result = bracketNumbers(input);
    cout << "Bracket numbers in sequence:\n";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}