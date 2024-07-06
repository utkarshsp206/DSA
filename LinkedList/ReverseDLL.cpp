#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data=val;
        next=NULL;
        prev= NULL;
    }
};

Node* ArraytoDLL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *curr=head;
    for(int i=1;i<arr.size();i++){
        Node *temp = new Node(arr[i]);
        curr->next=temp;
        temp->prev=curr;
        curr=curr->next;
    }

    return head;
}


//^Approach 1 Using STACK
Node *ReverseDLL(Node *head){
    stack<int> newStack;
    Node *temp = head;
    while(temp!=NULL){
        newStack.push(temp->data);
        temp=temp->next;
    }

    temp = head;
    while(temp!=NULL){
        temp->data = newStack.top();
        newStack.pop();
        temp=temp->next;
    }
    return head;
//*TC: O(2n) SC: O(n)
}


//^Approach 2 Reverse the Links in a Single Traversal (in Place)
Node *ReverseDLLOptimal(Node *head){
    Node *curr = head;
    Node *last = NULL;
    while(curr!=NULL){
        last = curr->prev;
        curr->prev = curr->next;
        curr->next = last;
        curr = curr->prev;
    }
    head = last->prev;
    return head;
//*TC: O(n)  SC:O(1)

}



void printDLL(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
vector<int> arr = {3,4,6,7,8,1};
Node *head = ArraytoDLL(arr);
printDLL(head);
cout<<endl;
Node *ReverseHead = ReverseDLL(head);
printDLL(ReverseHead);
cout<<endl;

Node *ReverseHeadOptimal = ReverseDLLOptimal(head);
printDLL(ReverseHeadOptimal);
cout<<endl;


return 0;
}