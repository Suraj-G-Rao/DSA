#include<iostream>
using namespace std;

class Node{

    public :
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

class BST{

    public :
        Node* root;

        BST(){
            root = NULL;
        }

        void insert(int data){
            root = insertRec(root, data);
        }

        Node* insertRec(Node* node, int data){
            if(node == NULL){
                return new Node(data);
            }

            if(data < node->data){
                node->left = insertRec(node->left, data);
            }
            else{
                node->right = insertRec(node->right, data);
            }

            return node;
        }

        void preorder(Node* node){
            if(node == NULL) return;

            cout<<node->data<<" ";
            preorder(node->left);
            preorder(node->right);
        }

        void inorder(Node* node){
            if(node == NULL) return;

            inorder(node->left);
            cout<<node->data<<" ";
            inorder(node->right);
        }

        void postorder(Node* node){
            if(node == NULL) return;

            postorder(node->left);
            postorder(node->right);
            cout<<node->data<<" ";
        }

        bool search(Node* node, int key){
            if(node == NULL) return false;

            if(node->data == key) return true;

            if(key < node->data) return search(node->left, key);
            else                 return search(node->right, key);
        }

        bool isEmpty(){
            if(root == NULL) return true;
            else             return false;
        }

};
int main() {


    BST bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);

    cout<<"Preorder  : ";
    bst.preorder(bst.root);
    cout<<endl;

    cout<<"Inorder   : ";
    bst.inorder(bst.root);
    cout<<endl;

    cout<<"Postorder : ";
    bst.postorder(bst.root);
    cout<<endl;

    if(bst.search(bst.root, 30)) {
        cout << "30 is Present mere dost " << endl;
    }
    else{
        cout << "30 is Not Present mere dost " << endl;
    }

    if(bst.search(bst.root, 100)) {
        cout << "100 is Present mere dost " << endl;
    }
    else{
        cout << "100 is Not Present mere dost " << endl;
    }

    if(bst.isEmpty()) {
        cout << "Tree is Empty mere dost " << endl;
    }
    else{
        cout << "Tree is not Empty mere dost " << endl;
    }


    return 0;
}
