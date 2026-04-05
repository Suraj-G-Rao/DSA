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
void recursion_reverse(node* &head,node* &cur , node* &prev){

    if(cur == NULL){
        head = prev;
        return ;
    }
    node* next = cur->next;
    cur->next=prev;
    recursion_reverse(head,next,cur);
}

void reverse_LL(node* &head){

    if(head == NULL){
        cout<<"Empty List ."<<endl;
        return;
    }

    if(head->next == NULL) return;

    node* prev = NULL;
    node* cur = head;
    node* next = NULL;

    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev=cur;
        cur=next;
    }
    head = prev;

}
void print(node* temp){

    if(temp == NULL){
        cout<<"Empty List ."<<endl;
        return;
    }

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

    cout<<"Linked List Before Reversing : ";
    print(head);

    // reverse_LL(head);
    node* prev = NULL;
    recursion_reverse(head,head,prev);

    cout<<"Linked List After Reversing : ";
    print(head);

    return 0;
}