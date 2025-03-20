#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data ;
    Node* next ;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node* next1) {
        data = data1;
        next = next1; 
    }
};
void print(Node* head){
    while(head){
        cout << head-> data << " " ;
        head = head->next;
    }
}
Node * insertHead(Node* head , int val){
    Node * temp = new Node(val , head);
    return temp;
}
Node* insertTail(Node * head , int val){
    if (head == NULL){
        return new Node(val);
    }
    Node * temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    Node * newNode = new Node(val);
    temp-> next = newNode;
    return head;
}
// insertion at kth element 
// k = (1-n+1)

Node * insertAtKth(Node * head ,int el, int k){
    if(head == NULL){
        if(k==1) return new Node(el);
        else
        return NULL;
    }
    if(k==1){
        Node * temp = new Node(el , head);
        return temp;
    }
    int cnt = 0 ;
    Node * temp = head;
    while(temp != NULL){
        cnt++;

        if(cnt == k-1){
            Node * x = new Node(el);
            x->next = temp-> next;
            temp-> next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

// insertion before the given value

Node* insertBeforeValue(Node* head , int el , int val){
    if(head == NULL){
        return NULL;
    }
    if(head -> data == val){
        return new Node(el , head);
    }
    Node * temp = head;
    while(temp-> next != NULL){
        if(temp-> next -> data == val){
            Node * x = new Node(el , temp-> next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {2,3,4,6};
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    cout << "Before : ";
    print(head);
    cout << endl << "After inserting element at head : ";
    head = insertHead(head , 1);
    print(head);
    cout << endl << "After inserting element at tail : ";
    head = insertTail(head , 7);
    print(head);
    cout << endl << "After inserting at kth place : ";
    head = insertAtKth(head , 5 , 5);
    print(head);
    cout << endl << "After inserting before the value : ";
    head = insertAtKth(head , 4 , 5);
    print(head);
    return 0;
}