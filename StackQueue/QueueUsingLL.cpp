//* Implementation of Queue using Linked Lists

#include<bits/stdc++.h>
using namespace std;

struct queueNode{
    int data;
    queueNode *next;

    queueNode(int d){
        data = d;
        next = NULL;
    }
};

class Queue{
    queueNode *front;
    queueNode *back;
    int size;
    public:
    Queue(){
        front=NULL;
        back = NULL;
        size=0;
    }

    void queuePush(int val){
        queueNode *temp = new queueNode(val);
        if(back==NULL){
            front=temp;
            back = temp;
        }
        else{
            back->next = temp;
            back = temp;
        }
        size++;
    }

    int queuePop(){
        if(front==NULL){
            return -1;
        }

        int popped = front->data;
        queueNode *temp = front;
        front = front->next;
        delete temp;
        size--;
        return popped;;
    }

    void print(){
     queueNode *temp = front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main() {
Queue q;
q.queuePush(5);
q.queuePush(6);
q.queuePush(9);
q.queuePop();
q.queuePush(8);
q.queuePop();
q.print();

return 0;
}