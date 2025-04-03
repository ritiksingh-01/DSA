#include<bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
    Node(char val) : data(val), left(nullptr), right(nullptr) {}
};

void inorder(Node* root, vector<char> &arr) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

vector<char> inOrder(Node* root) {
    vector<char> arr;
    inorder(root, arr);
    return arr;
}

Node* insertLevelOrder(const vector<char>& elements) {
    if (elements.empty()) return nullptr;

    Node* root = new Node(elements[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;
    while (i < elements.size()) {
        Node* current = q.front();
        q.pop();

        if (i < elements.size()) {
            current->left = new Node(elements[i++]);
            q.push(current->left);
        }

        if (i < elements.size()) {
            current->right = new Node(elements[i++]);
            q.push(current->right);
        }
    }

    return root;
}

int main() {
    int n;
    cin >> n;

    vector<char> elements(n);
    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }

    Node* root = insertLevelOrder(elements);
    vector<char> result = inOrder(root);

    cout << "Inorder Traversal: ";
    for (char val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}