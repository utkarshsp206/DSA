#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

void printRecursive(Node *head)
{
    if (head->next == NULL)
    {
        cout << head->data << " ";
        return;
    }
    cout << head->data << " ";
    printRecursive(head->next);
}

int main()
{

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(5);
    printList(head);
    cout << "\nPrinting Recursively\n";
    printRecursive(head);

    return 0;
}