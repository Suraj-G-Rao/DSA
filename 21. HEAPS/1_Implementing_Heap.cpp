#include<iostream>
using namespace std;

class MaxHeap{

    public :
        int size;
        int *arr;
        int capacity;

        MaxHeap(int capacity){
            this->capacity = capacity;
            size = 0;
            arr = new int[capacity];
        }

        void insert(int data){
            if(size == capacity){
                cout<<"Heap Is Full"<<endl;
                return;
            }

            arr[size] = data;
            int index = size;
            size++;

            // Heapify Up
            while(index > 0){
                int parent = (index - 1) / 2;
                if(arr[index] > arr[parent]){
                    swap(arr[index], arr[parent]);
                    index = parent;
                }
                else{
                    break;
                }
            }
        }

        void deleteRoot(){
            if(size == 0){
                cout<<"Heap Is Empty"<<endl;
                return;
            }

            arr[0] = arr[size - 1];
            size--;

            // Heapify Down
            int index = 0;
            while(index < size){
                int left = 2 * index + 1;
                int right = 2 * index + 2;
                int largest = index;

                if(left < size && arr[left] > arr[largest]){
                    largest = left;
                }
                if(right < size && arr[right] > arr[largest]){
                    largest = right;
                }

                if(largest != index){
                    swap(arr[index], arr[largest]);
                    index = largest;
                }
                else{
                    break;
                }
            }
        }

        int peek(){
            if(size != 0) return arr[0];
            else          cout<<"Heap Is Empty"<<endl;

            return -1;
        }

        bool isEmpty(){
            if(size == 0) return true;
            else          return false;
        }

        void print(){
            for(int i = 0; i < size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

};
int main() {


    MaxHeap h(5);

    h.insert(22);
    h.insert(43);
    h.insert(44);
    h.insert(10);
    h.insert(50);

    cout<<"Heap Elements : ";
    h.print();

    cout<<"Top Element : "<<h.peek()<<endl;

    h.deleteRoot();

    cout<<"After Deletion : ";
    h.print();

    cout<<"Top Element : "<<h.peek()<<endl;

    h.deleteRoot();

    cout<<"After Deletion : ";
    h.print();

    if(h.isEmpty()) {
        cout << "Heap is Empty mere dost " << endl;
    }
    else{
        cout << "Heap is not Empty mere dost " << endl;
    }


    return 0;
}
