#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

Node* insertAtBegin(Node *sir, int val){
    Node *temp = new Node(val);
        temp->next = sir;
        return temp;
    }

Node* insertAtEnd(Node *head, int val){
    Node *temp = new Node(val);
    if(head==NULL)
    return temp;
    Node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

Node* insertAtPos(Node *head, int val, int pos){
    Node *temp = new Node(val);
    Node *curr = head;
    while(pos-2){
        curr=curr->next;
        pos--;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
    //1->2->3->4->5->NULL
}

void printList(Node *head){
  Node* curr = head;
  while(curr!=NULL){
    cout<<curr->data<<" ";
    curr= curr->next;
  }
}

int main() {
Node *head = NULL;
head = insertAtBegin(head,1);
head = insertAtBegin(head,2);
head = insertAtBegin(head,3);
printList(head);
cout<<endl;

head = insertAtEnd(head,9);
printList(head);
cout<<endl;

head = insertAtPos(head,5,3);
printList(head);

return 0;
}