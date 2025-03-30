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
void print(Node * head){
    while(head != NULL){
        cout << head -> data <<" ";
        head = head -> next;
    }
}
Node* reverseList(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* newHead = reverseList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}
Node * findKthNode(Node * head , int k){
    k-= 1;
    while(head != NULL && k >0){
        k--;
        head = head -> next;
    }
    return head;
}


Node * reverseKGroup(Node * head , int k){
    Node * temp = head ;
    Node * prevNode = NULL;
    while(temp != NULL){
        Node * kthNode = findKthNode(temp , k);
        if(kthNode == NULL){
            if(prevNode) {
                prevNode -> next = temp;
            }
            break;
        }
        Node * nextNode = kthNode -> next;
        kthNode -> next = NULL;
        reverseList(temp);
        if(temp == head){
            head = kthNode;
        }else{
            prevNode -> next = kthNode;
        }
        prevNode = temp;
        temp = nextNode;
    }
    return head;
}

int main(){
    Node * head = NULL;
    int n , data;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        insert(head, data);
    }
    cout << "Orignal List : " ;
    print(head);
    cout << endl;
    head = reverseKGroup(head , 3);
    cout << "After reversing K group : " ;
    print(head);
    return 0;
}