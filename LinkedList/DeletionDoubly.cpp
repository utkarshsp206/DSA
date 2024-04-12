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

Node *deletionHead(Node *head){
    Node *temp = head;
    head=head->next;
    head->prev=NULL;
    delete temp;
    return head;
}

Node *deletionTail(Node *head){
    Node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    Node *temp = curr;
    curr->prev->next=NULL;
    delete temp;
    return head;
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
    cout << endl;
    head = deletionHead(head);
    printDoubly(head);
    cout << endl;
    head = deletionTail(head);
    printDoubly(head);

    return 0;
}