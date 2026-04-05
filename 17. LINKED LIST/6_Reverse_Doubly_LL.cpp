#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    public:
    int data;
    Node* next;
    Node* prev;

    // Constructor to create a new node
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// Function to reverse the doubly linked list
void reverseDoublyLinkedList(Node*& head) {

    if (head == nullptr) return;

    Node* prev = NULL;
    Node* current = head;
    Node* next = current->next;

    // Swap the next and prev pointers for each node
    while (next != NULL) {
        current->prev = next;
        current->next = prev;

        prev = current;
        current = next;
        next = current -> next;
    }
    current->next = prev;
    current->prev = NULL;

    head=current;
}
// void reverseDoublyLinkedList(Node*& head) {
//     Node* temp = nullptr;
//     Node* current = head;

//     // Swap the next and prev pointers for each node
//     while (current != nullptr) {
//         temp = current->prev;
//         current->prev = current->next;
//         current->next = temp;
//         current = current->prev;
//     }

//     // Before changing the head, check if the list is non-empty
//     if (temp != nullptr) {
//         head = temp->prev;
//     }
// }

// Function to insert a node at the end of the doubly linked list
void append(Node*& head, int data) {
    Node* newNode = new Node(data);
    Node* last = head;

    // If the list is empty, make the new node the head
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Traverse to the end of the list
    while (last->next != nullptr) {
        last = last->next;
    }

    // Link the new node
    last->next = newNode;
    newNode->prev = last;
}

// Function to print the doubly linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert nodes into the list
    // append(head, 1);
    // append(head, 2);
    // append(head, 3);
    // append(head, 4);
    // append(head, 5);

    cout << "Original List: ";
    printList(head);

    // Reverse the doubly linked list
    reverseDoublyLinkedList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
