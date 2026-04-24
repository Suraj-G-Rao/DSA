/*

PROBLEM STATEMENT :

SAMPLE INPUT  :
SAMPLE OUTPUT :

*/
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to insert in BST
Node* insertBST(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    
    if (val < root->data) {
        root->left = insertBST(root->left, val);
    } else {
        root->right = insertBST(root->right, val);
    }
    
    return root;
}

// Function to print BST (inorder traversal gives sorted order)
void printBST(Node* root) {
    if (root == NULL) {
        return;
    }
    printBST(root->left);
    cout << root->data << " ";
    printBST(root->right);
}

int main() {

    Node* root = NULL;
    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        root = insertBST(root, val);
    }

    cout << "BST Elements (Inorder - Sorted): ";
    printBST(root);
    cout << endl;

    return 0;
}
