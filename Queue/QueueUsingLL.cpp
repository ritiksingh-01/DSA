#include<bits/stdc++.h>
using namespace std;


class Node{
    public : 
        int data;
        Node * next;
        Node(int value){
            data = value;
            next = NULL;
        }
};

class Queue{
    Node * front ;
    Node * rear ;
    public :  
        Queue(){
            front = rear = NULL;
        }

        bool isEmpty(){
            return front == NULL;
        }
        void push(int x){
            if(isEmpty()){
                cout <<"Pushed " << x << " into queue" << endl;
                front = new Node(x);
                rear = front ;
                return ;
            }else{
                cout <<"Pushed " << x << " into queue" << endl;
                rear -> next = new Node(x);
                rear = rear -> next;
            }
        }
        void pop(){
            if(isEmpty()){
                cout <<"Queue is empty." << endl;
                return ;
            }else{
                Node * temp = front;
                front = front -> next;
                cout <<"Popped " << temp -> data << " from queue" << endl;
                delete temp;
            }
        }
        int start(){
            if(isEmpty()){
                cout << "Queue is empty." << endl;
                return -1;
            }else{
                return front -> data;
            }
        }
        void print(){
            if(isEmpty()){
                cout <<"Queue is empty." << endl;
                return ;
            }else{
                cout <<"Element inside the queue are : " ;
                Node * temp = front;
                while(temp != NULL){
                    cout << temp -> data << " " ;
                    temp = temp -> next;
                }
                cout << endl;
            }
        }
};


int main(){

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.push(4);
    // q.print();
    q.start();

    return 0;
}