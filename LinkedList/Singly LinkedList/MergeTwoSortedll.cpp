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
void print(Node* head){
    while(head){
        cout << head-> data << " " ;
        head = head->next;
    }
}

Node * mergeTwoSortedLL(Node* head1 , Node * head2 ){
    Node * dummyNode = new Node(-1);
    Node * res = dummyNode;
    while(head1 != NULL && head2 != NULL){
        if(head1 -> data < head2 -> data){
            res -> next = head1;
            res = head1;
            head1 = head1 -> next;
        }else{
            res -> next = head2;
            res = head2;
            head2 = head2->next;
        }
    }
    if(head1) res -> next = head1;
    if(head2) res -> next = head2;
    return dummyNode -> next;
}
int main(){
    Node * head1 = NULL;
    int n , data;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        insert(head1, data);
    }
    Node * head2 = NULL;
    int n2, data2;
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> data2;
        insert(head2, data2);
    }
    print(head1);
    cout << endl;
    print(head2);
    cout << endl << "After merge two sorted list : ";
    Node * mergeNode = mergeTwoSortedLL(head1 , head2);
    print(mergeNode);
    return 0;
}