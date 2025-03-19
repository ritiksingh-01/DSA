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
};
int cntLength(Node * head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
void print(Node* head){
    while(head){
        cout << head-> data << " " ;
        head = head->next;
    }
}

Node* removeHead(Node *head){
    if(head == nullptr) return head;
    Node * temp = head;
    head = head -> next;
    delete temp;
    return head;
}
Node* removeTail(Node *head){
    if(head == nullptr || head-> next == nullptr) return nullptr;
    Node* temp = head;
    while(temp-> next -> next != nullptr){
        temp = temp -> next;
    }
    free(temp->next); 
    temp->next = nullptr;
    return head;
}
int main(){
    vector<int> arr = {2,4,3,6};
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    cout << "Before : ";
    print(head);

    cout << endl;

    cout << "Length of LL : " << cntLength(head);
    head = removeHead(head);
    cout << endl;
    cout << "After deleting head : ";
    print(head);

    cout << endl;
    removeTail(head);
    cout << "After deleting tail : ";
    print(head);
    return 0;
}