#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data ;
        Node * next ;
        Node(int key){
            data = key;
            next = nullptr;
        }
};

int main(){
    Node * head ;
    head = NULL;
    vector<int> arr = {2,3,4,5,6};
    for(int i = 0 ; i < arr.size();i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }else{
            Node * temp ;
            temp = new Node(arr[i]);
            temp -> next = head;
            head = temp;
        }
    }
    Node * temp ;
    temp = head;
    while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
    }

    return 0;
}