#include<bits/stdc++.h>
using namespace std;

// stack using arr
class StackA{
    int *arr ;
    int size ;
    int top;
    
    public :
        bool flag;
        // constructor
        StackA(int s){
            size = s;
            top = -1;
            arr = new int[s];
            flag = 1;
        }

        // push 
        void push(int x){
            if(top == size - 1){
                cout << "Stack overflow\n" ;
                return ;
            }else{
                top++;
                arr[top] = x;
                cout << "Pushed " << x << " into the stack\n";
                flag = 0;
            }
        }
        // pop
        void pop(){
            if(top == -1){
                cout << "Stack underflow\n" ;
                return;
            }
            else{
                top--;
                cout <<"Popped " << arr[top+1] << " from the stack\n" ; 
                if(top == -1)
                flag = 1;
            }
        }
        // peek
        int peek(){
            if(top == -1){
                cout << "Stack empty\n" ;
                return -1;
            }
            else{
                return arr[top];
            }
        }

        // IsEmpty
        bool isEmpty(){
            return top == -1;
        }

        // IsSize
        int IsSize(){
            return top+1;
        }
};

class Node{
    public :
    int data ;
    Node * next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

class StackLL{
    Node  * top;
    int size;
    public: 

        StackLL(){
            top = NULL;
            size = 0;
        }

        // push
        void push(int x){
            Node * temp = new Node(x);
            if(temp == NULL){
                cout << "Stack overflow\n";
                return;
            }else{
            temp -> next = top;
            top = temp;
            size++;
            cout << "Pushed " << x << " into the stack \n";
            }
        }

        // pop
        void pop(){
            if(top == NULL){
                cout << "Stack underflow\n";
                return ;
            }else{
                Node * temp = top;
                cout << "Popped " << top -> data << " from the stack\n";
                top = top -> next;
                delete temp;
                size--;
            }
        }

        // peek
        int peek(){
            if(top == NULL){
                cout << "Stack is empty\n";
                return -1;
            }else{
                return top -> data;
            }
        }

        // isEmpty
        bool isEmpty(){
            return top == NULL;
        }
        // isSize
        int isSize(){
            return size ;
        }
};

int main(){

    // Stack s(5);
    // s.push(4);
    // s.push(5);
    // s.push(6);
    // s.push(8);
    // s.pop();
    // s.push(-1);
    // cout << s.peek() << endl;
    // cout << s.isEmpty() << endl;
    // cout << s.IsSize() << endl;
    // int value = s.peek();
    // if(s.flag == 0)
    //     cout << value << endl;

    // StackLL s;
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // s.push(6);
    // s.push(8);
    // s.pop();
    // s.pop();

    // cout << s.peek() << endl;
    // cout << s.isSize() << endl;
    // cout << s.isEmpty() << endl;

    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout << s.size() << endl;
    cout << s.top() << endl;


    return 0;
}