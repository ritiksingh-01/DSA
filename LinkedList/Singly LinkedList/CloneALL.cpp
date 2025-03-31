#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;           
    Node *next;        
    Node *random;       
    Node() : data(0), next(nullptr), random(nullptr){}; 
    Node(int x) : data(x), next(nullptr), random(nullptr) {} 
    Node(int x, Node *nextNode, Node *randomNode) :
            data(x), next(nextNode), random(randomNode) {}  
};
void printClonedLinkedList(Node *head) {
    while (head != nullptr) {
        cout << "Data: " << head->data;
        if (head->random != nullptr) {
            cout << ", Random: " << head->random->data;
        } else {
            cout << ", Random: nullptr";
        }
        cout << endl;
        head = head->next;  
    }
}
Node *cloneLL(Node *head){
    Node * temp = head;
    map<Node* , Node*> mpp;
    while(temp != NULL){
        Node * newNode = new Node(temp-> data);
        mpp[temp] = newNode;
        temp = temp -> next;
    }
    temp = head;
    while(temp != NULL){
        Node * copyNode = mpp[temp];
        copyNode -> next = mpp[temp-> next];
        copyNode-> random = mpp[temp-> random];
        temp = temp -> next;
    }
    return mpp[head];
}

Node * cloneLLOptimal(Node * head){

    Node * temp = head;
    // insert the copyNode in between the original node
    while(temp != NULL){
        Node * copyNode = new Node (temp -> data);
        copyNode -> next = temp -> next;
        temp -> next = copyNode ;
        temp = temp -> next -> next;
    }
    temp = head;
    // connected the random pointer to copy node 
    while(temp != NULL){
        Node * copyNode = temp -> next;
        if(temp -> random){
        copyNode -> random = temp -> random -> next;
        }else{
            copyNode -> random = nullptr;
        }
        temp = temp -> next -> next ;
    }

    // connect next pointer
    Node * dummyNode = new Node(-1);
    Node * res = dummyNode ;
    temp = head;
    while (temp != NULL){
        res -> next =temp -> next ;
        temp -> next = temp -> next -> next;
        res = res -> next;
        temp = temp -> next;
    }
    return dummyNode -> next;
}

int main() {
    Node* head = new Node(7);
    head->next = new Node(14);
    head->next->next = new Node(21);
    head->next->next->next = new Node(28);
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next->next->next;
    head->next->next->next->random = head->next;

    cout << "Original Linked List with Random Pointers:" << endl;
    printClonedLinkedList(head);

    Node* clonedList = cloneLL(head);

    cout << "\nCloned Linked List with Random Pointers using brute force approach :" << endl;
    printClonedLinkedList(clonedList);
    // tc :- O(2n) && sc :- O(N) + O(N)(required)

    Node* clonedList2 = cloneLLOptimal(head);

    cout << "\nCloned Linked List with Random Pointers using optimal approach :" << endl;
    printClonedLinkedList(clonedList2);
    return 0;
}
                                
                            