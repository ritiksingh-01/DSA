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

int main(){
    vector<int> arr = {2,4,3,6};
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    Node* temp = head;
    while(temp){
        cout << temp-> data << " " ;
        temp = temp->next;
    }
    cout << endl;
    cout << "Length of LL : " << cntLength(head);
    return 0;
}