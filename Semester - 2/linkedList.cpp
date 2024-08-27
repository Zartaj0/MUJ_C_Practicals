
#include <iostream>
using namespace std;

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
#ifndef _CXX_TEST_MAIN_

// Definition of the Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(Node* &head, int newValue) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = head;
    
    // Update head to point to the new node
    head = newNode;
}

// Function to insert a new node at the end of the list
void insertAtEnd(Node* &head, int newValue) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Initialize the linked list with given values
    Node* head = nullptr;
    int values[] = {13, 11, 9, 7, 5, 3, 1}; // Inserting at the end to maintain the order
    for (int value : values) {
        insertAtEnd(head, value);
    }

    // Insert a new node with value 0 at the beginning
    insertAtBeginning(head, 0);
    
    // Print the updated linked list
    printList(head);

    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
#endif