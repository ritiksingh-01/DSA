#include<bits/stdc++.h>
using namespace std;






int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(6);
    int n = q.size();
    while(n--){
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    cout << endl << q.size() << endl;
    return 0;
}