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

class BinaryTree{

    public :
        Node* root;

        BinaryTree(){
            root = NULL;
        }

        void insert(int data){
            root = insertRec(root, data);
        }

        Node* insertRec(Node* node, int data){
            if(node == NULL){
                return new Node(data);
            }

            char choice;
            cout<<"Insert "<<data<<" to Left or Right of "<<node->data<<" ? (l/r) : ";
            cin>>choice;

            if(choice == 'l' || choice == 'L'){
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

        bool isEmpty(){
            if(root == NULL) return true;
            else             return false;
        }

};
int main() {


    BinaryTree bt;

    bt.insert(1);
    bt.insert(2);
    bt.insert(3);
    bt.insert(4);
    bt.insert(5);

    cout<<"Preorder  : ";
    bt.preorder(bt.root);
    cout<<endl;

    cout<<"Inorder   : ";
    bt.inorder(bt.root);
    cout<<endl;

    cout<<"Postorder : ";
    bt.postorder(bt.root);
    cout<<endl;

    if(bt.isEmpty()) {
        cout << "Tree is Empty mere dost " << endl;
    }
    else{
        cout << "Tree is not Empty mere dost " << endl;
    }


    return 0;
}
