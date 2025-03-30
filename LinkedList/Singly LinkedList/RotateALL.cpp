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

Node * findNthNode(Node * head , int k){
    Node * temp = head;
    int cnt = 1;
    while(temp != NULL){
        if(cnt == k){
            return temp;
        }
        cnt++;
        temp = temp -> next;
    }
    return NULL;
}

Node * rotateALL(Node * head , int k){
    Node * tail = head;
    int len = 1;
    while(tail->next != NULL){
        len++;
        tail = tail -> next ;
    }
    if (k % len == 0) return head;
    k = k % len;
    tail -> next = head;
    Node * newTail = findNthNode(head , len-k); 
    head = newTail -> next;
    newTail -> next = NULL;
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
    head = rotateALL(head , 3);
    cout << "After rotating K time : " ;
    print(head);
    return 0;
}