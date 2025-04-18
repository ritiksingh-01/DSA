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
Node * oddEvenLL(Node * head){
    if(head == NULL || head-> next == NULL) return head;
    Node * temp = head->next;
    Node * odd = head;
    Node * even = head-> next;
    Node * evenHead = even;
    while(even != NULL && even->next != NULL){
        odd-> next = odd-> next-> next;
        even -> next = even-> next -> next;
        odd = odd-> next;
        even = even -> next;
    }
    odd->next = evenHead;
    return head;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = convertArr2DLL(arr);
    head = oddEvenLL(head);
    print(head);
    return 0;
}