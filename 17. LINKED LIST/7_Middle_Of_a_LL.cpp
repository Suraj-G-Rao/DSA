/*

PROBLEM LINK : https://bit.ly/3tRF3ga

SAMPLE INPUT  : 1 2 3 4 5
SAMPLE OUTPUT : 3

SAMPLE INPUT  : 1 2 3 4 5 6
SAMPLE OUTPUT : 4


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
node* middle_LL(node* &head){

    if(head == NULL || head->next==NULL) return head;

    if(head->next->next == NULL) return head->next;

    node* fast = head->next;
    node* slow = head;

    while(fast != NULL){
        fast=fast->next;
        if(fast!=NULL)   fast= fast->next;
        
        slow = slow->next;
    }
    return slow;
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

    node * middle = middle_LL(head);
    cout<<"Middle Value is "<<middle->data<<endl;

    return 0;
}