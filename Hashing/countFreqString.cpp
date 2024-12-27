#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin >> s;

    // using number array
    // int hash[256] = {0};

    // for(int i = 0 ; i < s.size(); i++){
    //     hash[s[i]]++;
    // }
    // int q;
    // cin >> q;
    // while(q--){
    //     char c;
    //     cin >> c;
    //     cout << hash[c] << endl;
    // }

    // using hashmap 

    map<char,int> mapp;
    for(int i = 0 ; i < s.size();i++){
        mapp[s[i]]++;
    }
    for(auto it : mapp){
        cout << it.first << "-->" << it.second << endl;
    }
    return 0;
}