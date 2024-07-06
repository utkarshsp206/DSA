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

//^Inserting Before Head
Node *InsertatHead(Node *head, int val){
    Node *temp = new Node(val);
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}

//^Inserting After Tail
Node *InsertatTail(Node *head, int val){
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    Node *temp = new Node(val);
    curr->next=temp;
    temp->prev=curr;
    return head;
}

//^Inserting at Kth Position
Node *InsertatK(Node *head, int val, int k){
    Node *curr = head;
    int cnt=1;
    if(k==1){
        return InsertatHead(head,val);
    }

    while(curr==NULL){
        curr=curr->next;
        cnt++;
        if(cnt==k) break; //*Now both cnnt == k and curr pointing to Kth node
    }

    if(curr== NULL){  //*i.e. K is at tail
        return InsertatTail(head,val);
    }

    Node *temp = new Node(val);
    curr->prev->next=temp;
    temp->prev = curr->prev;
    temp->next = curr;
    curr->prev = temp;

    return head;
}


 
int main() {
vector<int> arr = {1,2,3,4,5};
Node *head = ArraytoDLL(arr);
Display(head);
cout<<endl;
head = InsertatHead(head,9);
Display(head);
cout<<endl;
head = InsertatTail(head,0);
Display(head);
cout<<endl;
head = InsertatK(head,7,7);
Display(head);

return 0;
}