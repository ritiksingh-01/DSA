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

Node * convertArr2DLL(vector<int> arr){
    Node * head = new Node (arr[0]);
    Node* prev = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node * temp = new Node(arr[i] , nullptr , prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    while(head){
        cout << head-> data << " " ;
        head = head->next;
    }
}
Node * insertAtHead(Node * head , int el){
    Node * newNode = new Node(el, head , nullptr);
    head->back = newNode;
    head = newNode;
    return head;
}
Node * insertAtTail(Node * head , int el){
    if(head -> next == NULL) return insertAtHead(head , el);
    Node * temp = head;
    while(temp-> next != NULL){
        temp = temp-> next;
    }
    Node * prev = temp -> back;
    Node * newNode = new Node(el);
    prev -> next = newNode ;
    newNode -> next = temp;
    newNode -> back = prev;
    temp->back = newNode;
    return head;
}

Node * insertBeforeKthPos(Node * head , int el , int k){

    if(k==1){
        return insertAtHead(head , el);
    }
    int cnt = 0;
    Node * temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp -> next ;
    }
    Node * prev = temp-> back;
    Node * newNode = new Node (el , temp , prev);
    prev -> next = newNode;
    temp-> back = newNode ;
    return head;

}
int main(){
    vector<int> arr = {2,4,3,6};
    Node* head = convertArr2DLL(arr);
    print(head);

    cout << endl << "After inserting before head : ";
    head = insertAtHead(head , 1);
    print(head);
    cout << endl << "After inserting before tail : ";
    head = insertAtTail(head , 5);
    print(head);

    cout << endl << "After inserting before Kth position : ";
    head = insertBeforeKthPos(head , 7 , 7);
    print(head);
    return 0;
}