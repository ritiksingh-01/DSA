#include <iostream>
#include <queue>
using namespace std ;

int main (){
queue<string> q;
q.push("Hello");
q.push("Ritik");
q.push("Rishi");
cout << "First element : " << q.front()<<endl;
q.pop();
cout << "First element : "<< q.front()<<endl;
cout << "Size of queue : "<< q.size()<<endl;
    return 0;
}