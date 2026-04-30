#include<iostream>
using namespace std;

class Queue{

    public :
        int size;
        int *arr;
        int front;
        int rear;

        Queue(int size){
            this->size = size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }

        void push(int data){
            if(rear < size-1){
                if(front == -1){
                    front = 0;
                }
                arr[++rear] = data;
            }
            else{
                cout<<"Queue Is Full"<<endl;
            }
        }
        void pop(){
            if(front != -1 && front <= rear){
                front++;
                if(front > rear){
                    front = -1;
                    rear = -1;
                }
            }
            else{
                cout<<"Queue Is Empty"<<endl;
            }
        }
        int peek(){
            if(front != -1 && front <= rear) return arr[front];
            else          cout<<"Queue Is Empty"<<endl;

            return -1;
        }
        bool isEmpty(){
            if(front == -1) return true;
            else            return false;
        }

};
int main() {


    Queue q(5);

    q.push(22);
    q.push(43);
    q.push(44);
    q.push(22);
    q.push(43);
    q.push(44);

    cout << q.peek() << endl;

    q.pop();

    cout << q.peek() << endl;

    q.pop();

    cout << q.peek() << endl;

    q.pop();

    cout << q.peek() << endl;

    if(q.isEmpty()) {
        cout << "Queue is Empty mere dost " << endl;
    }
    else{
        cout << "Queue is not Empty mere dost " << endl;
    }


    return 0;
}
