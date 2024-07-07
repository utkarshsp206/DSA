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
int LengthOfLoop(Node *head){
    Node *temp = head;
    map<Node*,int> mpp;
    int count=0;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()){
            return count-mpp[temp]+1;
        }
        count++;
        mpp[temp]=count;
        
        temp=temp->next;
        
    }
    return 0;
}

//^Approach 2: Optimal , using Tortoise and Hare Method
int LengthOfLoopOptimal(Node *head){
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast=fast->next->next;
        if(slow==fast){
            int count=1;
            slow=slow->next;
            while(slow!=fast){
                count++;
                slow=slow->next;
            }
            return count;
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
cout<<LengthOfLoop(head);
cout<<endl;
cout<<LengthOfLoopOptimal(head);


return 0;
}