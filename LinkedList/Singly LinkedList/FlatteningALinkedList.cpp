                                
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *child;
    Node() : data(0), next(nullptr), child(nullptr) {};
    Node(int x) : data(x), next(nullptr), child(nullptr) {}
    Node(int x, Node *nextNode, Node *childNode) :
                    data(x), next(nextNode), child(childNode) {}
};

Node* convertArrToLinkedList(vector<int>& arr){
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    for(int i = 0; i < arr.size(); i++){ 
        temp->child = new Node(arr[i]); 
        temp = temp->child; 
    }
    return dummyNode->child; 
}
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->child;
    }
    cout << endl;
}

void printOriginalLinkedList(Node* head, int depth) {
    while (head != nullptr) {
        cout << head->data;
        if (head->child) {
            cout << " -> ";
            printOriginalLinkedList(head->child, depth + 1);
        }
        if (head->next) {
            cout << endl;
            for (int i = 0; i < depth; ++i) {
                cout << "| ";
            }
        }
        head = head->next;
    }
}

Node * flattenLinkedList(Node * head){
    vector<int> arr;
    Node * temp = head;
    while(temp != NULL){ // n
        Node * t2 = temp ;
        while(t2 != NULL){ // m
            arr.push_back(t2->data);
            t2 = t2-> child;
        }
        temp = temp -> next;
    } // n*m
    sort(arr.begin() , arr.end()); // xlogx
    return convertArrToLinkedList(arr); // n*m
}


Node * mergeTwoList(Node * list1 , Node * list2){
    Node * dummyNode = new Node (-1);
    Node * res = dummyNode;
    while(list1 != NULL && list2 != NULL){
        if(list1 -> data < list2->data){
            res -> child = list1;
            res = list1;
            list1 = list1 -> child;
        }else{
            res-> child = list2;
            res = list2;
            list2 = list2-> child;
        }
        res -> next = NULL;
    }
    if(list1) res -> child = list1;
    else res -> child = list2;
    return dummyNode->child;
}

Node * flattenLinkedListOptimal(Node * head){
	if (head == NULL || head->next == NULL) return head;

    Node* mergeHead = flattenLinkedList(head->next);
    head->next = NULL;
    head= mergeTwoList(head, mergeHead);
    return head;
}
int main() {
    Node* head = new Node(5);
    head->child = new Node(14);
    
    head->next = new Node(10);
    head->next->child = new Node(4);
    
    head->next->next = new Node(12);
    head->next->next->child = new Node(20);
    head->next->next->child->child = new Node(13);
    
    head->next->next->next = new Node(7);
    head->next->next->next->child = new Node(17);
    cout << "Original linked list:" << endl;
    printOriginalLinkedList(head, 0);

    Node* flattened1 = flattenLinkedList(head);
    cout << "\nFlattened linked list using brute force approach : ";
    printLinkedList(flattened1);
    // tc = O((n*m)*2 + xlog x) [where x = n*m] && sc = o(n*m)*2

    Node* flattened2 = flattenLinkedListOptimal(head);
    cout << "\nFlattened linked list using optimal approach : ";
    printLinkedList(flattened2);
    // tc= O(N * 2M)  && sc = O(N);
    return 0;
}