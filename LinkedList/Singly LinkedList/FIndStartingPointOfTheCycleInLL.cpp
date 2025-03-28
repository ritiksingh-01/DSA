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

int findThePoint(Node * head ){
    Node * temp = head;
    map<Node* , int > mpp;
    while(temp != NULL){

        if(mpp.find(temp) != mpp.end()){
            return temp->data;
        }
        mpp[temp] = 1;
        temp = temp -> next;
    }
    return -1;
}
int findPos(Node * head , int point){
    Node * temp = head ;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(temp->data == point){
            return cnt-1;
            break;
        }
        temp = temp-> next;
    }
    return 0;
}


int findStartingPoint(Node * head){
    Node * slow = head;
    Node * fast = head;
    while(fast != NULL && fast -> next != NULL){
        slow = slow-> next;
        fast = fast -> next -> next;
        if(slow == fast){
            slow = head;
            while (slow != fast){
                slow = slow -> next;
                fast = fast -> next;
            }
            return findPos(head , slow->data);
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
    fifth->next = third; 
    cout << "Using brute force approach : " << findPos(head,findThePoint(head))<< endl;
     // tc :- o(w * 2 logn) && sc:- o(n)

    cout << "Using Optimal approach : " <<findStartingPoint(head) << endl;
     // tc :- o(n) && sc:- o(1)
    return 0;
}

