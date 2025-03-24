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
//  brute force 

bool isPalindrome(Node* head) {
    stack<int> st;
    Node * temp = head;
    while(temp != NULL){
        st.push(temp->data);
        temp = temp-> next;
    }
    temp = head;
    while(temp != NULL){
        if(temp -> data != st.top()) return false;
        temp = temp -> next;
        st.pop();
    }
    return true;
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

// optimal appraoch 
bool  isPalindromeOptimal(Node * head){
    Node * fast = head;
    Node * slow = head ;
    while ( fast -> next != NULL && fast->next->next != NULL){
        slow = slow -> next;
        fast = fast-> next->next;
    }
    Node * newNode = reverseList(slow->next);
    Node * first = head;
    Node * second = newNode;
    while(second != NULL){
        if(first -> data != second-> data) {
            reverseList(slow-> next);
            return false;
        }
        first = first -> next;
        second = second -> next;
    }
    reverseList(slow-> next);
    return true;
}

int main(){
    Node * head = NULL;
    int n , data;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        insert(head, data);
    }
    cout<<"Brute force appraoch : " << isPalindrome(head)<< endl;
    cout<<"Optimal appraoch : " << isPalindromeOptimal(head);
    return 0;
}