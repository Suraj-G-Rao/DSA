/*

PROBLEM LINK  : https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

*/

//APPROACH 1
//{ Driver Code Starts



// } Driver Code Ends
/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

// class Solution {
//   private :
//     void insert_at_end(Node* &head,Node* &tail , int data){
        
//         Node* newnode = new Node(data);
//         if(head == NULL){
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         tail ->next = newnode;
//         tail = newnode;
//     }
//   public:
//     Node *copyList(Node *head) {
//         // Write your code here
//         Node* clonehead = NULL;
//         Node* clonetail = NULL;
        
//         Node* temp = head;
        
//         while(temp != NULL){
//             insert_at_end(clonehead,clonetail,temp->data);
//             temp = temp->next;
//         }
        
//         Node* temp1 = head;
//         Node* temp2 = clonehead;
        
//         unordered_map<Node* , Node*> old2new;
        
//         while(temp1!=NULL){
//             old2new[temp1] = temp2;
//             temp1 = temp1->next;
//             temp2 = temp2->next;
//         }
        
//         temp1 = head;
//         temp2 = clonehead;
//         while(temp1 != NULL){
//             temp2 -> random = old2new[temp1->random];
//             temp1 = temp1->next;
//             temp2 = temp2->next;
//         }
        
//         return clonehead;
//     }
// };


// APPROACH 2

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node* next;
//         Node* random;
        
//         Node(int d){
//             this->data = d;
//             this->next = NULL;
//         }
// };
// class Solution
// {
//    private:
//     void insertAtTail(Node* &head, Node* &tail, int d) {
//         Node* newNode = new Node(d);
//         if(head == NULL) {
//             head = newNode;
//             tail = newNode;
//         }
//         else
//         {
//             tail -> next = newNode;
//             tail = newNode;
//         }
//     }
    
//     void print(Node* head) {
//         while(head != NULL) {
//             cout << head -> data << " ";
//             head = head -> next;
//         }cout << endl;
//     }

//     void printRandom(Node* head) {
//         while(head != NULL) {
//             cout << " head data: " << head->data <<" ";
//             if(head ->arb != NULL) {
//                 cout << " head random data" << head -> arb ->data;
//             }
//             else
//             {
//                 cout << " head random data: NULL";
//             }
//             head = head -> next;
//             cout << endl;
//         }
//     }

//     public:
//     Node *copyList(Node *head)
//     {
//         //step 1: Create a Clone List
//         Node* cloneHead = NULL;
//         Node* cloneTail = NULL;
        
//         Node* temp = head;
//         while(temp != NULL) {
//             insertAtTail(cloneHead, cloneTail, temp->data);
//             temp = temp -> next;
//         }
        
//         // step 2: insert nodes of Clone List in between originalList
        
//         Node* originalNode = head;
//         Node* cloneNode = cloneHead;
        
//         while(originalNode != NULL && cloneNode != NULL) {
//             Node* next = originalNode -> next;
//             originalNode -> next = cloneNode;
//             originalNode = next;
            
//             next = cloneNode -> next;
//             cloneNode -> next = originalNode;
//             cloneNode  = next;
//         }
        
//         // step 3: Random pointer copy
//         originalNode = head;
//         cloneNode = cloneHead;
        
//         while(originalNode != NULL && cloneNode != NULL) { 
            
//             if(originalNode -> arb != NULL) {
//                 cloneNode -> arb = originalNode -> arb -> next;
//             }
//             else
//             {
//                 cloneNode -> arb  = NULL;
//             }
            
//             cloneNode = cloneNode -> next;
//             originalNode = originalNode -> next;
//         }
        
//         //step 4: revert step 2 changes
//         Node* original = head;
//         Node* copy = cloneHead;
        
//          while (original && copy)
//             {
//                 original->next =
//                  original->next? original->next->next : original->next;
         
//                 copy->next = copy->next?copy->next->next:copy->next;
//                 original = original->next;
//                 copy = copy->next;
//             }

//         // step 5 answer return
//         return cloneHead;
//     }
// };