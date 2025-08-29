

#include<bits/stdc++.h>
using namespace std;

//  by using 2 queue 
class MyStack1 {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack1() {
        
    }
    
    void push(int x) {
        if(!q1.empty()){
            q1.push(x);
        }else{
            q2.push(x);
        }
    }
    
    int pop() {
        int ans;
        if(!q1.empty()){
            int size = q1.size();
            int n = 0;
            while(n != size - 1){
                q2.push(q1.front());
                q1.pop();
                n++;
            }
            ans = q1.front();
            q1.pop();
        }else{
            int size = q2.size();
            int n = 0;
            while(n != size - 1){
                q1.push(q2.front());
                q2.pop();
                n++;
            }
            ans = q2.front(); 
            q2.pop();
        }
        return ans;
    }
    
    int top() {
        if (empty())
            return 0;
        else if (q1.empty())
            return q2.back();
        else
            return q1.back();
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};


// by using 1 queue 


class MyStack2 {
public:
    queue<int> q;
    MyStack2() {}

    void push(int x) {
        q.push(x);
        int size = q.size();
        for (int i = 0; i < size - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty())
            return -1;
        int topElement = q.front();
        q.pop();
        return topElement;
    }

    int top() {
        if (q.empty())
            return -1;
        return q.front();
    }

    bool empty() { return q.empty(); }
};



int main(){

    MyStack1 s;
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.pop() << endl;
    cout << s.top() << endl;
    s.push(8);
    s.push(9);
    cout << s.pop() << endl;
    cout << s.top() << endl;
    
    return 0;
}