/*

PROBLEM LINK  : 

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
node* reverse_LL(node* head){

    node* prev = NULL;
    node* curr = head;
    node* next = NULL;

    while(curr != NULL){
        next = curr ->next;
        curr->next = prev;
        prev=curr;
        curr = next;
    }
    return prev;
}
node* middle_LL(node* head){
    if(head == NULL)    return NULL;

    node* slow = head;
    node* fast = head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;

}
bool palindrome(node* head){

    if(head == NULL || head->next == NULL) return true;

    node* mid = middle_LL(head);

    mid->next = reverse_LL(mid->next);

    node* head1 = head;
    node* head2 = mid->next;

    while(head2 != NULL){
        if(head1->data != head2->data) return false;

        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    mid -> next = reverse_LL(mid -> next);

    return true;
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
    if(palindrome(head)) cout<<"Yes LL is a Palindrome .";
    else                 cout<<"No LL is Not a Palindrome.";

    return 0;
}