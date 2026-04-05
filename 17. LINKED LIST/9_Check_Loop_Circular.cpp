/*

PROBLEM LINK  : https://bit.ly/3rSdTDo

SAMPLE INPUT  :
SAMPLE OUTPUT :


*/

#include<iostream>
#include<map>
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
bool check_circular_LL(node* head){
    if(head == NULL ){
        return false;
    }

    node* temp = head->next;

    while(temp->next != NULL && temp->next != head){
        temp = temp->next;
    }

    if(temp->next == head) return true;

    return false;
}
bool detect_loop(node* temp){

    if(temp == NULL ) return false;

    map<node* ,bool> visited;

    while(temp != NULL){

        if(visited[temp] == true){
            return false;
        }
        visited[temp]=true;
        temp = temp->next;
    }
    return true;
}
node* floyds_cycle_detection(node* head){

    if(head == NULL ) return NULL;

    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast != NULL){

        fast= fast->next;
        if(fast!=NULL)  fast = fast->next;

        slow = slow->next;

        if(slow == fast){
            return slow;
        } 
    }
    return NULL;
}
node* starting_node_of_loop(node* head){

    if(head == NULL) return NULL;

    node* intersection =  floyds_cycle_detection(head);
    if(intersection == NULL ) return NULL;
    node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void remove_loop(node* head){

    node* loop_start = starting_node_of_loop(head);

    if(loop_start == NULL ) return ;
    
    node* temp = loop_start;

    while(temp->next!=loop_start){
        temp = temp->next;
    }
    temp -> next = NULL;

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

    tail->next=head;
    cout<<tail->next->data<<endl;


    if(check_circular_LL(head))   cout<<"Linked List Is Circular ."<<endl;
    else                          cout<<"Linked List is not circular "<<endl;

    if(detect_loop(head))         cout<<"Linked List does not have a loop ."<<endl;
    else                          cout<<"Linked List has a loop "<<endl;

    if(floyds_cycle_detection(head)!=NULL)         cout<<"Linked List has a loop "<<endl;
    else                                     cout<<"Linked List does not have a loop ."<<endl;

    node* start = starting_node_of_loop(head);
    cout<<"Loop Starts at "<<start->data<<endl;

    remove_loop(head);

    if(check_circular_LL(head))   cout<<"Linked List Is Circular ."<<endl;
    else                          cout<<"Linked List is not circular "<<endl;

    if(detect_loop(head))         cout<<"Linked List does not have a loop ."<<endl;
    else                          cout<<"Linked List has a loop "<<endl;

    if(floyds_cycle_detection(head)!=NULL)         cout<<"Linked List has a loop "<<endl;
    else                                     cout<<"Linked List does not have a loop ."<<endl;

    node* start2 = starting_node_of_loop(head);
    cout<<"Loop Starts at "<<start2->data<<endl;


    return 0;
}