#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node *prev;
    Node *next;

    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void Display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node *ArraytoDLL(vector<int> arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for(int i=1;i<arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev=mover;
        mover=temp;
    }
return head;
}

Node *ReturnAtPos(Node *head,int pos){
    int cnt=1;
    Node *temp = head;
    while(cnt!=pos){
        cnt++;
        temp=temp->next;
    }

    return temp;
}


//^Approach 1 : Naive solution - Two Passes
Node *MidNode(Node *head){
    Node *temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int midPos = cnt/2;

        midPos++;

    return ReturnAtPos(head,midPos);
  //*TC: O(3n/2)  
} 

//^Approach 2: Using Slow Fast Method (Tortoise-Hare Method)
Node *MidNodeOptimal(Node *head){  
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

int main() {
vector<int> arr = {1,2,3,4};
Node *head = ArraytoDLL(arr);
Display(head);
cout<<endl;
Node *MiddleNode = MidNode(head);
cout<<MiddleNode->data<<" ";
cout<<endl;

cout<<"Using Optimal Method: "<<endl;
Node *MiddleNodeOptimal = MidNodeOptimal(head);
cout<<MiddleNodeOptimal->data<<" ";
cout<<endl;

return 0;
}