#include<bits/stdc++.h>
using namespace std;

// Define a Node struct to represent a single node in the linked list
struct Node {
    int data;      // The value stored in the node
    Node* next;   // A pointer to the next node in the list

    // Constructor for the Node struct
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to print the contents of the linked list
void printList(Node* node) {
    // Initialize a pointer to the current node
    Node* curr = node;

    // Loop through the list and print the value of each node
    while (curr!= NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main() {
    // Create a new linked list with three nodes
    Node* head = new Node(3);
    head->next = new Node(4);
    head->next->next = new Node(5);

    // Print the contents of the linked list
    printList(head);
    cout << endl;

    return 0;
}