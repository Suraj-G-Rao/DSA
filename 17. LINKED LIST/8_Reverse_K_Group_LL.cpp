/*

PROBLEM LINK : : https://bit.ly/3r1rCIP

SAMPLE INPUT  : 1 2 3 4 5 6 k=2
SAMPLE OUTPUT : 2 1 4 3 6 5

SAMPLE INPUT  : 1 2 3 4 5 6 k=3
SAMPLE OUTPUT : 3 2 1 6 5 4

SAMPLE INPUT  : 1 2 3 4 5  k=2
SAMPLE OUTPUT : 2 1 4 3 5

SAMPLE INPUT  : 1 2 3 4 5  k=3
SAMPLE OUTPUT : 3 2 1 5 4



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
node* reverse_k_group(node* head ,int k){

    if(head == NULL)  return NULL;

    node* prev = NULL;
    node* cur = head;
    node* next =NULL;
    int cnt=0;

    while(cur != NULL && cnt<k){
        next = cur->next;
        cur->next=prev;
        prev = cur;
        cur = next;
        cnt++;
    }

    if(next != NULL){
        head->next = reverse_k_group(next,k);
    }
    return prev;
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

    int n,k;
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

    cout<<"Enter The value of k : ";
    cin>>k;

    print(head);

    node* rev = reverse_k_group(head,k);

    print(rev);

    return 0;
}