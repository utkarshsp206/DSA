//* Implement Queue using Array

#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int currSize, maxSize, start, end;

public:
    Queue()
    {
        maxSize = 16;
        arr = new int[maxSize];
        currSize = 0;
        start = end = -1;
    }

    Queue(int maxSize)
    {
        arr = new int[maxSize];
        currSize = 0;
        start = end = -1;
    }

    void push(int val)
    {
        if (currSize == maxSize)
        {
            cout << "Overflow\n";
            exit(1);
        }
        if (end == -1)
        {
            start = end = 0;
        }
        else
        {
            end = (end + 1) % maxSize;
        }
        arr[end] = val;
        currSize++;
    }

    int pop()
    {
        if (start == -1)
        {
            cout << "Underflow\n";
            exit(1);
        }
        int popped = arr[start];
        if (currSize == 1)
        {
            start = -1;
            end = -1;
        }
        else
            start = (start + 1) % maxSize;
        currSize--;
        return popped;
    }

    int top()
    {
        if (start == -1)
        {
            cout << "No element\n";
            exit(1);
        }
        return arr[start];
    }

    int size()
    {
        return currSize;
    }
};

int main()
{
    Queue q(3);
    q.push(1);
    q.push(3);
    q.push(5);
    cout << q.pop();
    cout << q.pop();
    cout << q.top();

    return 0;
}