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

Node * sort0s1s2s(Node * head){
    int cnt0 = 0 , cnt1=0 , cnt2=0;
    Node * temp = head;
    while(temp != NULL){
        if(temp->data == 0) cnt0++;
        if(temp->data == 1) cnt1++;
        if(temp->data == 2) cnt2++;
        
        temp = temp-> next;
    }
    temp = head;
    while(temp != NULL){
        if(cnt0)
        {
            temp-> data = 0; 
            cnt0--;
        }
        else if (cnt1) {
            temp-> data = 1;
            cnt1--;
        }
        else if (cnt2) {
            temp -> data = 2; 
            cnt2--;
        }
        
        temp = temp -> next;
    }
    return head;
}

Node * sort0s1s2sOptimal(Node* head){
    if(head == NULL || head -> next == NULL) return head;
    Node* zerosHead = new Node(-1);
    Node* onesHead = new Node(-1);
    Node* twosHead = new Node(-1);
    
    Node* zeros = zerosHead;
    Node* ones = onesHead;
    Node* twos = twosHead;
    
    Node* temp = head;
    
    while (temp != NULL) {
        if (temp->data == 0) {
            zeros->next = temp;
            zeros = zeros->next;
        } else if (temp->data == 1) {
            ones->next = temp;
            ones = ones->next;
        } else {
            twos->next = temp;
            twos = twos->next;
        }
        temp = temp->next;
    }
    
    zeros->next = (onesHead->next) ? onesHead -> next : twosHead -> next;
    ones->next = twosHead->next;
    twos->next = NULL;
    
    Node* newHead = zerosHead->next;
    
    delete zerosHead;
    delete onesHead;
    delete twosHead;
    
    return newHead;
}
int main(){
    vector<int> arr = {1,0,1,2,0,2,1,1,0,0};
    Node* head = convertArr2DLL(arr);
    head = sort0s1s2s(head);
    cout <<"Using brute force appraoch : " ;
    print(head);
    head = sort0s1s2sOptimal(head);
    cout << endl <<"Using Optimal appraoch : " ;
    print(head);
    return 0;
}