/*

PROBLEM LINK  : https://bit.ly/3GsXWsz

SAMPLE INPUT  :
SAMPLE OUTPUT :


*/

#include<iostream>
using namespace std;
class node{

    public:
        int data;
        node* next;
    
    node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insert_at_end(node* &head , node* &tail ,int d){

    node* newnode = new node(d);

    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}
node* find_mid(node* head){

    node* fast = head->next;
    node* slow = head;

    while(fast!=NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;

}
node* merge(node* left ,node* right){

    if(left == NULL) return right;
    if(right == NULL) return left;

    node* anshead = NULL;
    node* anstail = NULL;

    insert_at_end(anshead,anstail,-1);

    node* temp = anshead;

    while(left != NULL && right != NULL){
        if(left->data >= right->data){
            temp->next = right;
            right = right->next;
            temp = temp->next;
        }
        else{
            temp->next = left;
            left = left->next;
            temp = temp->next;
        }
    }
    while(left!=NULL){
        temp->next = left;
        left = left->next;
        temp = temp->next;
    }
    while(right!=NULL){
        temp->next = right;
        right = right->next;
        temp = temp->next;
    }

    return anshead->next;
}
node* Merge_Sort(node* head){

    if(head == NULL || head->next ==NULL)  return head;
    node* mid = find_mid(head);

    node* left = head;
    node* right = mid->next;

    mid->next = NULL;

    left = Merge_Sort(left);
    right = Merge_Sort(right);

    node* result = merge(left,right);

    return result;

}
void print(node* temp){

    if(temp == NULL){
        cout<<"Empty Linked List "<<endl;
        return;
    }
    
    cout<<"Linked List Elements : ";
    while(temp->next != NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main(){

    int n;
    cout<<"Enter The No. Of Elements : ";
    cin>>n;

    node* head = NULL;
    node* tail = NULL;
    
    cout<<"Enter The Element : ";
    for(int i=0 ; i<n ;i++){
        int d;
        cin>>d;
        insert_at_end(head,tail,d);
    }

    print(head);

    head = Merge_Sort(head);
    print(head);

    return 0;
}