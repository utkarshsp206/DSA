/*
^You are given the node to be deleted node. You will not be given access to the first node of head.
^All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.
*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data=val;
        next=NULL;
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

//^Approach 1
 void deleteNode(Node* node) {
        Node *temp=node;
        temp->data = temp->next->data;
        while(temp->next->next!=NULL){
             temp=temp->next;
            temp->data = temp->next->data;
           
        }
//*TC: O(n)
      temp->next=NULL;
    }

//^Approach 2
 void deleteNode2(Node *node){
    Node *temp = node;
    temp->data=temp->next->data;
    temp->next=temp->next->next;

//*TC: O(1)
 }

int main() {
Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(5);
    printList(head);
    cout<<endl;

    deleteNode(head->next->next);
    printList(head);
    cout<<endl;

    deleteNode2(head->next);
    printList(head);
    cout<<endl;


return 0;
}