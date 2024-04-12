#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev, *next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

Node *insertAtBegin(Node *head, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
        return temp;

    temp->next = head;
    head->prev = temp;
    return temp;
}

Node *insertAtEnd(Node *head, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
        return temp;

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node *insertAtPos(Node *head, int val, int pos)
{
    Node *temp = new Node(val);
    if (pos == 1)
    {
        temp->next = head;
        head->prev = temp;
        return temp;
    }
    Node *curr = head;
    while (pos-2)
    {
        curr = curr->next;
        pos--;
    }
    temp->next = curr->next;
    curr->next->prev = temp;
    curr->next = temp;
    temp->prev = curr;
    return head;
}

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
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    head->next = temp1;
    temp1->prev = head;
    Node *temp2 = new Node(30);
    temp1->next = temp2;
    printDoubly(head);
    cout<<endl;
    head = insertAtBegin(head,50);
    printDoubly(head);
    cout<<endl;
    head = insertAtEnd(head,90);
    printDoubly(head);
    cout<<endl;
    head = insertAtPos(head,40,5);
    printDoubly(head);
    cout<<endl;
    return 0;
}