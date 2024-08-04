//* Implementation of Stack using Linked Lists

#include <bits/stdc++.h>
using namespace std;

struct stackNode
{
    int data;
    stackNode *next;

    stackNode(int d)
    {
        data = d;
        next = nullptr;
    }
};

class Stack
{
    stackNode *top;
    int size;

public:
    Stack()
    {
        top = nullptr;
        size = 0;
    }

    void stackPush(int val)
    {
        stackNode *temp = new stackNode(val);
        temp->next = top;
        top = temp;
        size++;
    }

    int pop()
    {
        if (size == 0)
        {
            cout << "Underflow\n";
            return -1;
        }

        int popped = top->data;
        stackNode *temp = top;
        top = top->next;
        delete temp;
        size--;
        return popped;
    }



};

int main()
{

    return 0;
}