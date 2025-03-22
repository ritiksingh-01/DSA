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

// brute force approach 
Node * reverse(Node * head){
    Node * temp = head ;
    stack<int> st;
    while(temp != NULL){
        st.push(temp-> data);
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        temp -> data = st.top();
        st.pop();
        temp = temp-> next;
    }
    return head;
}

// optimal approach 
Node * reverse2(Node * head){
    if(head == NULL || head -> next == NULL) return head;
    Node * last = NULL;
    Node * current  = head;
    while(current != NULL){
        last = current -> back;
        current -> back = current -> next;
        current -> next = last;
        current = current -> back;
    }
    head = last-> back;
    return head;
}

int main(){
    vector<int> arr = {2,4,3,6};
    Node* head = convertArr2DLL(arr);
    cout << "Before : ";
    print(head);
    cout << endl << "After reverse using brute force approach : ";
    head = reverse(head);
    print(head);
    cout << endl << "After reverse using Optimal approach : ";
    head = reverse2(head);
    print(head);
    return 0;
}