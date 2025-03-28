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

// brute force approach
//  tc :- O(w * 2 * logn) && sc :- O(n)
int findLengthOfLoop(Node * head){
    map<Node* , int > mpp;
    Node * temp = head; 
    int timer = 1;
    while(temp != NULL){
        if(mpp.find(temp) != mpp.end()){
            return (timer - mpp[temp]);
        }
        mpp[temp] = timer;
        timer++;
        temp = temp->next;
    }
    return 0;
}

//  optimal approach 
//  tc :- O(w) && sc :- O(1)
int findLength(Node* slow, Node* fast){
    int cnt = 1;
    while(slow!=fast){
        cnt++;
        fast = fast->next;
    }
    return cnt;
}
int lengthOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;     
        fast = fast->next->next;
        if (slow == fast) {
            return findLength(slow, fast->next);
        }
    }
    return 0; 
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
    fifth->next = second; 
    cout << "Using brute force approach : " << endl;
    int loopLength1 = findLengthOfLoop(head);
    if (loopLength1 > 0) {
        cout << "Length of the loop: " << loopLength1 << endl;
    } else {
        cout << "No loop found in the linked list." << endl;
    }

    cout << "Using optimal approach : " << endl;
    int loopLength2 = lengthOfLoop(head);
    if (loopLength2 > 0) {
        cout << "Length of the loop: " << loopLength2 << endl;
    } else {
        cout << "No loop found in the linked list." << endl;
    }

    return 0;
}

