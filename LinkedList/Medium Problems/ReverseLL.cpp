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

void Display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node *ArraytoVal(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i=1;i<arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
} 

//^Approach 1 : Iterative
Node *ReverseLL(Node *head){
Node *curr = head;
Node *forward= NULL;
Node *last = NULL;

while(curr!=NULL){
    forward=curr->next;
    curr->next=last;
    last=curr;
    curr=forward;
}
return last;
}

//^Approach 2 : Recursive
Node *ReverseLLRecursive(Node *head){
  if(head==NULL || head->next==NULL){
            return head;
        }

        Node *newHead = ReverseLLRecursive(head->next);
        Node *front = head->next;
        front->next=head;
        head->next=NULL;

        return newHead;

}

int main() {
vector<int> arr={1,2,3,4,5};
Node  *head = ArraytoVal(arr);
Display(head);
cout<<endl;

Node *newHead = ReverseLL(head);
Display(newHead);
cout<<endl;

Node *newHeadRecursive = ReverseLLRecursive(newHead);
Display(newHeadRecursive);
cout<<endl;

return 0;
}