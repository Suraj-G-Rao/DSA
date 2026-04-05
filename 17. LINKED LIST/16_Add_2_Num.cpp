/*

PROBLEM LINK  : 

SAMPLE INPUT  :  L1 - 2 4 0    L2 - 2 0 
SAMPLE OUTPUT :  240+20 = 2 6 0


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
node* reverse_LL(node* head){
    node* prev = NULL;
    node* cur = head;
    node* next = NULL;

    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
node* add_2_num(node* head1, node* head2){

    head1 = reverse_LL(head1);
    head2 = reverse_LL(head2);

    node* anshead = NULL;
    node* anstail = NULL;


    int carry = 0;

    while(head1 != NULL || head2 != NULL || carry != 0){

        int val1=0;
        if(head1 != NULL)  val1 = head1->data;

        int val2=0;
        if(head2 != NULL) val2 = head2->data;

        int sum = val1+val2+carry;

        int digit = sum%10;
        carry = sum/10;

        insert_at_end(anshead,anstail,digit);

        if(head1 != NULL) head1 = head1->next;
        if(head2 != NULL) head2 = head2->next;

    }

    anshead = reverse_LL(anshead);
    return anshead;
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
    cout<<"Linked List 1 : "<<endl;
    cout<<"Enter The No. Of Elements : ";
    cin>>n;

    node* head1 = NULL;
    node* tail1 = NULL;
    
    cout<<"Enter The Element : ";
    for(int i=0 ; i<n ;i++){
        int d;
        cin>>d;
        insert_at_end(head1,tail1,d);
    }

    print(head1);

    cout<<"Linked List 2 : "<<endl;
    cout<<"Enter The No. Of Elements : ";
    cin>>n;

    node* head2 = NULL;
    node* tail2 = NULL;
    
    cout<<"Enter The Element : ";
    for(int i=0 ; i<n ;i++){
        int d;
        cin>>d;
        insert_at_end(head2,tail2,d);
    }

    print(head2);

    node* final_LL = add_2_num(head1,head2);

    print(final_LL);

    return 0;
}