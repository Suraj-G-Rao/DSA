#include<iostream>
using namespace std;

class node{

    public:
        int data;
        node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

    // ~node(){
    //     int value = this->data;
    //     if(this->next != NULL){
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout<<"Deleted Element : "<<value<<endl;
    // }
};
void insert_at_begin(node* &head,node*&tail,int d){

    node *temp = new node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
        return ;
    }
    
    temp->next = head;
    head = temp;

}
void insert_at_end(node* &tail, int d){

    node* temp = new node(d);
    tail->next = temp;
    tail=temp;
}
void insert_at_pos(node* &head , node* &tail , int pos , int d){

    node* temp = new node(d);
    if(head ==  NULL){
        head = temp;
        tail = temp;
        return;
    }
    if(pos==1){
        temp->next = head;
        head = temp;
        return;
    }
    int cnt=1;
    node* temp1 = head;
    while(cnt<pos-1 && temp1 != NULL){
        temp1 = temp1->next;
        cnt++;
    }
    if(cnt==pos-1){
        if(temp1->next == NULL){
            temp1->next=temp;
            tail = temp;
            return ;
        }
        temp->next = temp1->next;
        temp1->next = temp;

    }
    else{
        cout<<"Invalid Position"<<endl;
    }
}
void deleteNode(node* & head,int position) { 

    //deleting first or start node
    if(position == 1) {
        node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}
void delete_at_pos(node* &head , int pos){
    node* temp = head;
    if(pos==1){
        head = head->next;
        // free(temp);
        delete temp;
        return ;
    }
        int cnt=1;
        while(cnt<pos-1 && temp->next!=NULL){
            temp = temp->next;
            cnt++;
        }
        if(cnt==pos-1 && temp->next!=NULL){
            node* del = temp->next;
            temp->next = del->next;
            // free(del);
            delete del;
        }
        else{
            cout<<"Invalid Position "<<endl; 
        }
}
void print(node* temp){

    cout<<endl<<" VALUE : ";
    while(temp!= NULL){
        cout<<" "<<temp->data<<"  ";
        temp=temp->next; 
    }
    cout<<endl;
}
int main(){

    node* head = NULL;
    node* tail = NULL;
    // insert_at_pos(head,tail,3,3);

    insert_at_begin(head,tail,5);
    insert_at_begin(head,tail,4);
    insert_at_begin(head,tail,2);
    insert_at_pos(head,tail,2,3);
    insert_at_end(tail,6);


    print(head);

    // delete_at_pos(head,5);
    // delete_at_pos(head,1);
    // delete_at_pos(head,2);

    // deleteNode(head,2);

    print(head);

    return 0;
}