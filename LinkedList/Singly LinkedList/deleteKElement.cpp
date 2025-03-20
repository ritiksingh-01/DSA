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
void print(Node* head){
    while(head){
        cout << head-> data << " " ;
        head = head->next;
    }
}
Node* deleteK(Node* head , int k){
    if(head == nullptr) return nullptr;
    
    if(k == 1){
        Node * temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    int cnt = 0 ;
    Node*temp = head ; Node * prev = nullptr;
    while(temp != nullptr){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp-> next;
    }
    return head;
}
Node *deleteEl(Node* head ,int el){
    if(head == nullptr) return nullptr;
    
    if(head->data == el){
        Node * temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    Node*temp = head ; Node * prev = nullptr;
    while(temp != nullptr){
        if(temp->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp-> next;
    }
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
    cout<< endl << "After deleting K element : ";
    head = deleteK(head , 4);
    print(head);
    cout<< endl << "After deleting value : ";
    head = deleteEl(head , 4);
    print(head);
    return 0;
}