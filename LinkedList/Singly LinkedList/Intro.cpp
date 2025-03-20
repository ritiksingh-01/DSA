#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data ;
        Node * next ;
        Node(int key){
            data = key;
            next = nullptr;
        }
};

int main(){
    Node * head ;
    head = new Node(4);

    //  To store in Starting 

    if(head != NULL){
        Node * temp;
        temp = new Node(3);
        temp -> next = head;
        head = temp;
    }else{
        head = new Node(3);
    }
    
    // To store in End 



    Node * temp ;
    temp = head;
    while(temp != NULL){
    cout << temp -> data << endl;
    temp = temp -> next;
    }

    return 0;
}