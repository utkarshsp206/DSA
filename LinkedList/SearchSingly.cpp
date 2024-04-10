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

bool searchItem(Node *head, int ele){
    Node *curr = head;
    while(curr!=NULL){
        if(curr->data == ele)
        return true;
        curr = curr->next;
    }
    return false;
}

bool searchRecursive(Node *head, int ele){
    if(head == NULL)
    return false;
    if(head->data == ele)
    return true;
    return searchRecursive(head->next,ele);

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
    cout<<endl;
    cout<<searchItem(head,1)<<endl;
    cout<<searchItem(head,8)<<endl;
    cout<<"Searching using Recursive Method"<<endl;
    cout<<searchRecursive(head,1)<<endl;
    cout<<searchRecursive(head,8)<<endl;

    return 0;
}