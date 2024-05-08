#include<iostream>
#include <set>
using namespace std;
int main (){

set<int> s;

s.insert(2);
s.insert(3);
s.insert(3);
s.insert(1);
for (int i : s){
    cout << i;
}cout << endl;


cout << s.count(3)<<endl;

set<int>:: iterator itr = s.find(1);
for (auto it = itr ; it!=s.end();it++){
    cout <<*it<<" ";
}
    return 0;
}