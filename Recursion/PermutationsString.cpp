#include <bits/stdc++.h>
using namespace std;

void permutation(string &str, vector<string> &ans, string &temp, vector<bool> &visited) {
    if (temp.size() == str.size()) {
        ans.push_back(temp);
        return;
    }
    
    for (int i = 0; i < visited.size(); i++) {
        if (!visited[i]) {
            visited[i] = true;
            temp.push_back(str[i]);
            permutation(str, ans, temp, visited);
            visited[i] = false;
            temp.pop_back();
        }
    }
}

void permutationsOptimal(string &str, vector<string> &ans,int index) {
    if (index == str.size()) {
        ans.push_back(str);
        return;
    }
    for (int i = index; i < str.size(); i++) {
        swap(str[i] , str[index]);
        permutationsOptimal(str , ans , index+1);
        swap(str[i] , str[index]);
    }
}

int main() {
    string str = "abc";
    vector<string> ans;
    string temp;
    vector<bool> visited(str.size(), false);
    permutation(str, ans, temp, visited);
    cout << "Using brute force : " << endl;
    for (const auto &subset : ans) {
        cout << "{ ";
        for (char num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    cout << "Using optimal approach : " << endl ;
    vector<string> ans2 ;
    permutationsOptimal(str,ans2,0);

    for (const auto &subset : ans2) {
        cout << "{ ";
        for (char num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}