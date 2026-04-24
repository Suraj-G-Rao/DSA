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

// Function to print tree (inorder traversal)
void printTree(Node* root) {
    if (root == NULL) {
        return;
    }
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

int main() {

    // Create root node
    Node* root = new Node(1);
    
    // Add other nodes
    root->left = new Node(2);
    root->right = new Node(3);
    
    // Add more nodes as needed
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);

    cout << "Tree Elements (Inorder): ";
    printTree(root);
    cout << endl;

    return 0;
}
