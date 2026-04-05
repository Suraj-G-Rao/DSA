/*

PROBLEM LINK  : https://bit.ly/3rfFdfV

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
void solve(node* first , node* second){

    if(first ->next == NULL){
        first->next = second;
        return;
    }

    node* prev = first;
    node* next = prev->next;

    node* curr = second;
    node* next2 = curr->next;
    
    while(curr!=NULL && next!= NULL){
        if((curr->data >= prev->data) && (curr->data <= next->data)){
            prev->next = curr;
            next2 = curr->next;
            curr->next = next;
            prev = curr;
            curr = next2;

            // next = prev->next;
        }
        else{
            prev = next;
            next = next->next;
            if(next == NULL){
                prev->next = curr;
                return;
            }

        }
    }
}
node* sort_2_LL(node* first , node* second){

    if(first == NULL) return second;
    if(second == NULL) return first;

    if(first->data <= second->data){
        solve(first,second);
        return first;
    }
    else{
        solve(second,first);
        return second;
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

    node* final_LL = sort_2_LL(head1,head2);

    print(final_LL);

    return 0;
}