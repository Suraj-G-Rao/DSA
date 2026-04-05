/*

PROBLEM LINK  : https://bit.ly/3s3fAOu

SAMPLE INPUT  : 2 2 1 1 0 0
SAMPLE OUTPUT : 0 0 1 1 2 2


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
void insert_at_tail(node* &head,node* &tail , node* cur){
    if(tail == NULL){
        head = cur;
        tail = cur;
        tail->next = NULL;
        return ; 
    }
    tail->next = cur;
    tail = cur;
    tail->next = NULL;
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
node* sort_012(node* head){

    node* zero_head = NULL;
    node* zero_tail = zero_head;
    node* one_head = NULL;
    node* one_tail = one_head;
    node* two_head = NULL;
    node* two_tail = two_head;

    node* temp = head;
    node* t = NULL;

    while(temp!=NULL){
        t = temp->next;

        if(temp->data == 0){
            insert_at_tail(zero_head,zero_tail,temp);
        }
        else if(temp->data == 1){
            insert_at_tail(one_head,one_tail,temp);
        }
        else if(temp->data == 2){
            insert_at_tail(two_head,two_tail,temp);
        }
        temp = t;
    }
    // print(zero_head);
    // print(one_head);
    // print(two_head);

    if(zero_tail != NULL){
        if(one_head != NULL){
            zero_tail -> next = one_head;
            one_tail->next = two_head;
        }
        else{
            zero_tail -> next = two_head;
        }
        return zero_head;
    }
    else if(one_tail != NULL){
        one_tail -> next = two_head;
        return one_head;
    }

    return two_head;

}

// SECOND APPROACH USING A DUMMY ELEMENT

void insertAtTail(node* &tail, node* curr ) {
    tail -> next = curr;
    tail = curr;
}


node* sortList(node *head)
{
    node* zeroHead = new node(-1);
    node* zeroTail = zeroHead;
    node* oneHead = new node(-1);
    node* oneTail = oneHead;
    node* twoHead = new node(-1);
    node* twoTail = twoHead;
    
    node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        
        int value = curr -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2) {
            insertAtTail(twoTail, curr);
        }       
        curr = curr -> next;
    }
    
    //merge 3 sublist
    
    // 1s list not empty
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    free(zeroHead);
    free(oneHead);
    free(twoHead);

    
    return head;
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

    head = sort_012(head);

    print(head);

    return 0;
}