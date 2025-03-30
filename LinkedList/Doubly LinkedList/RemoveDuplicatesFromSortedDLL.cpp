#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data ;
    Node* next ;
    Node* back;
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    Node(int data1, Node* next1,Node* back1) {
        data = data1;
        next = next1; 
        back = back1;
    }
};
void print(Node* head){
    while(head){
        cout << head-> data << " " ;
        head = head->next;
    }
}

Node * removeDuplicate(Node * head){
    Node * temp = head;
    while(temp != NULL && temp -> next != NULL){
        Node * nextNode = temp-> next ;
        while(nextNode != NULL && nextNode -> data == temp -> data){
            nextNode = nextNode -> next;
        }
        temp -> next = nextNode;
        if(nextNode) nextNode -> back = temp;
        temp = temp -> next;
    }
    return head;
}

int main() {
    Node* head = new Node(1);
    head->back = NULL;
    Node* first = new Node(1);
    head->next = first;
    first->back = head;

    Node* second = new Node(2);
    first->next = second;
    second->back = first;

    Node* third = new Node(2);
    second->next = third;
    third->back = second;

    Node* four = new Node(3);
    third->next = four;
    four->back = third;

    Node* five = new Node(4);
    four->next = five;
    five->back = four;
    five->next = NULL;
    cout << "Before removing duplicate : ";
    print(head);
    cout << endl;

    head = removeDuplicate(head);
    cout << "After removing duplicate : " ;
    print(head);
    return 0;
}