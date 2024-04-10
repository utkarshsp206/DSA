#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node *deletionAtBegin(Node* head) {
    Node *temp = head;
    head=head->next;
    delete temp;
    return head;
}

Node *deletionAtEnd(Node *head){
    Node *curr = head;
    while(curr->next->next!=NULL ){
        curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;
    return head;
}

Node *deletionAtPos(Node *head, int pos){
    if(pos==1){
        return deletionAtBegin(head);
    }
    Node *curr = head;
    while(pos-2){
        curr=curr->next;
        pos--;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return head;

}
// 1->2->3->4->5->6->7->8->9->10

Node *deletionAtMatch(Node *head, int ele){  //Deletes the first matching occurrence of ele in LL
Node *curr = head;
    while(curr!=NULL){
        if(curr->data==ele){
            if(curr==head){
                return deletionAtBegin(head);
            }
            delete curr;
            return head;
        }
    }

}

void printList(Node *head){
  Node* curr = head;
  while(curr!=NULL){
    cout<<curr->data<<" ";
    curr= curr->next;
  }
}

 
int main() {
Node *head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);
head->next->next->next = new Node(4);
head->next->next->next->next = new Node(4);
head->next->next->next->next->next = new Node(5);
printList(head);
head = deletionAtBegin(head);
cout<<endl;
printList(head);
cout<<endl;
head = deletionAtEnd(head);
printList(head);
cout<<endl;
head = deletionAtPos(head,2);
printList(head);
cout<<endl;
head = deletionAtMatch(head,2);
printList(head);


return 0;
}