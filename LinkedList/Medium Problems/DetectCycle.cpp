#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

//^Approach 1: Using Hashing
bool DetectCycle(Node *head){
    map<Node*, int> mpp;
    Node *temp = head;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()){
            return 1;
        }

        mpp[temp]=1;

        temp=temp->next;
    }
    return 0;
}

//^Approach 2: Optimal , using Tortoise and Hare Method
bool DetectCycleOptimal(Node *head){
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return 1;
        }
    }
    return 0;
}

 
int main() {
Node *head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);
head->next->next->next = new Node(4);
head->next->next->next->next = head->next; 
cout<<DetectCycleOptimal(head);
cout<<endl;
cout<<DetectCycle(head);


return 0;
}