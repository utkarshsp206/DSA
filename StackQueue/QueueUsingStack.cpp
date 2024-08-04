//* Implementation of Queue using Stack

#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1, s2;

public:
    void push(int val)
    {
        //^ Step1: S1->S2
        while (s1.size())
        {
            s2.push(s1.top());
            s1.pop();
        }

        //^ Step2: val->S1
        s1.push(val);

        //^ Step3: S2->S1
        while (s2.size())
        {
            s1.push(s2.top());
            s1.pop();
        }
    }

    int pop()
    {
        int popped = s1.top();
        s1.pop();
        return popped;
    }

    int top()
    {
        return s1.top();
    }
};

class Queue2
{
    stack<int> s1,s2;
    public:
    void push(int val){
        s1.push(val);
    }

    int pop(){
        int popped ;
        if(!s2.empty()){
             popped = s2.top();
            s2.pop();
        }
        else{
            //^ S1->S2
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
            popped = s2.top();
            s2.pop();
        }
        return popped;
    }

};

int main()
{

    return 0;
}