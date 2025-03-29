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
void print(Node* head){
    while(head){
        cout << head-> data << " " ;
        head = head->next;
    }
}
vector<pair<int, int>> findPairSum(Node* head, int sum) {
    Node* temp1 = head;
    vector<pair<int, int>> ans; 
    while (temp1 != NULL) {
        Node* temp2 = temp1->next;
        while (temp2 != NULL) {
            if (temp1->data + temp2->data == sum) {
                ans.push_back(make_pair(temp1->data, temp2->data)); 
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return ans;
}


Node * findTail(Node * head){
    Node * temp = head ;
    while(temp != NULL && temp -> next != NULL){
        temp = temp -> next;
    }
    return temp;
}

vector<pair<int, int>> findPairSumOptimal(Node* head, int sum){
    vector<pair<int, int>> ans; 
    if(head == NULL) return ans;
    Node * left = head;
    Node * right = findTail(head);
    while(left-> data < right -> data){
        if(left-> data + right -> data == sum){
            ans.push_back({left->data, right->data});
            left = left -> next ;
            right = right -> back; 
        }
        else if(left-> data + right -> data < sum){
            left = left -> next;
        }else {
            right = right -> back;
        }
    }
    return ans;
}

int main() {
    Node* head = new Node(1);
    head->back = NULL;
    Node* first = new Node(3);
    head->next = first;
    first->back = head;

    Node* second = new Node(4);
    first->next = second;
    second->back = first;

    Node* third = new Node(5);
    second->next = third;
    third->back = second;

    Node* four = new Node(2);
    third->next = four;
    four->back = third;

    Node* five = new Node(5);
    four->next = five;
    five->back = four;
    five->next = NULL;

    print(head);

    int sum = 5; 
    vector<pair<int, int>> pairs = findPairSum(head, sum);
    
    cout << endl << "Pairs with sum using brute force approach : " << sum << ": ";
    for (const auto& p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    //  tc = O(n2) && sc = O(1)

    vector<pair<int, int>> pairs2 = findPairSumOptimal(head, sum);
    cout << endl << "Pairs with sum using optimal approach : " << sum << ": ";
    for (const auto& p : pairs2) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
        //  tc = O(n) && sc = O(1)
    cout << endl;

    return 0;
}