#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;   
    Node* next;      
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


bool detectLoop(Node * head){
    Node * temp = head ;
    unordered_map< Node* , int > mpp;

    while(temp != NULL){
        if(mpp.find(temp) != mpp.end()){
            return true;
        }
        mpp[temp] = 1;
        temp = temp-> next;
    }
    return false;
}

bool detectCycle(Node * head){
    Node * slow = head;
    Node * fast = head;
    while(fast != NULL && fast -> next != NULL){
        slow = slow->next;
        fast = fast-> next -> next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third; 
    cout << "Using brute force approach : " <<detectLoop(head) << endl;
     // tc :- o(w * 2 logn) && sc:- o(n)

    cout << "Using Optimal approach : " <<detectCycle(head) << endl;
     // tc :- o(n) && sc:- o(1)
    return 0;
}

