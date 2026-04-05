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
void remove_duplicates(node* head){

    node* curr = head;

    while(curr != NULL){

        node* temp = curr->next;
        node* prev = curr;
        while(temp!=NULL){
            if(temp->data == curr->data){
                prev->next = temp->next;
                free(temp);
                temp = prev->next;   // Update temp to prev->next after deletion
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
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

    remove_duplicates(head);

    print(head);

    return 0;
}