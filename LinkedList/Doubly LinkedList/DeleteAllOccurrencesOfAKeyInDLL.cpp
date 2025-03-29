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
Node * deleteAllOccurrence(Node * head , int x){
    Node * temp = head ;
    while(temp != NULL){
        if(temp -> data == x){
            Node * nextNode = temp-> next;
            Node * prevNode = temp -> back;
            if(temp == head){
                head = head -> next;
            }
            if(nextNode) nextNode -> back = prevNode;
            if(prevNode) prevNode -> next = nextNode;
            temp = nextNode;
        }else{
            temp = temp -> next;
        }
    }
    return head;
}
int main(){
    Node  * head = new Node(2);
    head -> back = NULL;
    Node * first = new Node(3);
    head -> next = first;
    first->back = head;

    Node * second = new Node (4);
    first -> next = second;
    second -> back = first;
    Node * third = new Node(2);
    second -> next = third;
    third -> back = second; 
    Node * four = new Node (2);
    third -> next =  four;
    four -> back = third;
    Node * five = new Node(5);
    four -> next = five;
    five -> back = four ;
    five -> next = NULL;
    print(head);
    cout << endl << "After deleting all occurrences of 2 : ";
    head = deleteAllOccurrence(head , 2);
    print(head);
    return 0;
}