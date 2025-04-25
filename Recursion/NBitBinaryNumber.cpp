#include<bits/stdc++.h>
using namespace std ;


void find(int n , vector<string> & ans , string &temp , int zero , int one){
    if(temp.size() == n){
        ans.push_back(temp);
        return;
    }

    if(zero < one){
        temp.push_back('0');
        find(n , ans , temp , zero+1 , one);
        temp.pop_back();
    }
    temp.push_back('1');
    find(n , ans , temp , zero , one+1);
    temp.pop_back();
}

int main(){

    int n = 2;
    vector<string> ans;
    string temp;
    find(n , ans , temp,0,0);
    for (const string &str : ans) { 
        cout << str << " ";
    }
    return 0;
}