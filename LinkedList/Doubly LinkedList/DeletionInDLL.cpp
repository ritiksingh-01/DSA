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

Node* deleteHead(Node* head){
    if(head == NULL || head-> next == NULL) return NULL;
    Node* prev = head;
    head = head-> next;
    head -> back = nullptr;
    prev -> next = nullptr;
    delete prev;
    return head;
}
Node * deleteTail(Node * head){
    if(head == NULL || head-> next == NULL) return NULL;

    Node * tail = head;
    while(tail->next != NULL){
        tail = tail -> next;
    }
    Node * prev = tail-> back;
    prev-> next = nullptr;
    tail-> back = nullptr;
    delete tail;
    return head;
}
Node * deleteKthPosition(Node * head , int k){
    if(head == NULL) {
        if (k==1) {
            return NULL;
        }
    }
    int cnt = 0;
    Node * temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp-> next;
    }
    Node * prev = temp -> back;
    Node * front = temp -> next;

    if(prev == NULL && front == NULL){
        delete temp;
        return NULL;
    }else if(prev ==  NULL){
        return  deleteHead(head);
    }else if(front == NULL){
        return deleteTail(head);
    }
        prev -> next = front;
        front -> back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
        delete temp;
    return head;
}
int main(){
    vector<int> arr = {1,2,4,3,5,6};
    Node* head = convertArr2DLL(arr);
    print(head);
    cout << endl << "After deleting head : " ;
    head = deleteHead(head);
    print(head);
    cout << endl << "After deleting tail : " ;
    head = deleteTail(head);
    print(head);
    cout << endl << "After deleting from kth position : " ;
    head = deleteKthPosition(head,4);
    print(head);
    return 0;
}