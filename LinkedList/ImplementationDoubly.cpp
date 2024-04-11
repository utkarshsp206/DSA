#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void printDoubly(Node *head)
{
    Node *curr = head;
    while (curr!= NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *temp1 = new Node(2);
    Node *temp2 = new Node(3);
    head->next = temp1;
    temp1->next = temp2;
    temp1->prev = head;
    temp2->prev = temp1;
    printDoubly(head);

    return 0;
}