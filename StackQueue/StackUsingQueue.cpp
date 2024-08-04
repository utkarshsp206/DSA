//* Implementation of Stack using Queue

#include<bits/stdc++.h>
using namespace std;

class Stack{
  queue<int> q;
  public:
  void push(int val){
    int s= q.size();
    q.push(val);
    for(int i=0;i<s;i++){
        q.push(q.front());
        q.pop();
    }
  }  

  int pop(){
    int popped = q.front();
    q.pop();
    return popped;
  }

  int size(){
    return q.size();
  }

  int top(){
    return q.front();
  }
};
 
int main() {
Stack S;
S.push(4);
S.push(5);
S.push(1);
cout<<S.pop();
cout<<S.top();
cout<<S.pop();
cout<<S.top();
S.push(5);
S.push(3);


return 0;
}