/*

PROBLEM LINK  : 

SAMPLE INPUT  :  1 2 3 4 5 6
SAMPLE OUTPUT :  1 2 3       4 5 6


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
        tail->next = head;
    }
    else{
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
    }
}
pair<node* , node*> divide_circular_LL(node*head){

    if(head == NULL || head->next == head) return {head,NULL};

    node* fast = head;
    node* slow = head;

    while(fast->next !=head && fast->next->next != head){
        fast = fast->next->next;
        slow = slow->next;
    }

    node* head1 = head;
    node* head2 = slow->next;

    if(fast->next == head){
        fast -> next = head2;   
    }
    else{
        fast->next->next = head2;
    }
    slow->next = head1;


    return {head1,head2};
}
void print(node* head){

    if(head == NULL){
        cout<<"Empty Linked List "<<endl;
        return;
    }
    node* temp = head;
    
    do{
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }while(temp != head);

    cout<<"HEAD"<<endl;
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

    pair<node* , node*> divide = divide_circular_LL(head);

    node* first_LL = divide.first;
    node* second_LL = divide.second;

    cout<<"First Circular LL : ";
    print(first_LL);

    cout<<"Second Circular LL : ";
    print(second_LL);



    return 0;
}