#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data ;
    Node * next;
    Node (int val , Node * next1){
        data = val;
        next = next1;
    }
    Node (int val){
        data = val;
        next = nullptr;
    }
};

void insert(Node * &head , int val){
    Node * newNode = new Node (val);
    if(head == NULL){
        head = newNode;
    }else{
        Node * temp = head;
        while (temp-> next != NULL){
            temp = temp->next;
        }
        temp-> next = newNode;
    } 
}
Node* middleNode(Node* head) {

    Node * slow = head ;
    Node * fast = head;
    while(fast != NULL && fast->next!= NULL){
        slow = slow -> next ;
        fast = fast-> next -> next;
    }
    return slow;
}
void print(Node* head){
    while(head){
        cout << head-> data << " " ;
        head = head->next;
    }
}
int main(){
    Node * head = NULL;
    int n , data;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        insert(head, data);
    }
    head = middleNode(head);
    print(head);
    return 0;
}