#include<bits/stdc++.h>
using namespace std;
 
int main() {
priority_queue<int> h;  //By Default it makes MAX HEAP
h.push(20);
h.push(30);
h.push(40);
h.push(10);
h.push(15);
h.push(5);
h.push(25);
h.push(50);

while (!h.empty())
{
    /* code */
    cout<<h.top()<<" ";
    h.pop();
}

cout<<endl<<"MIN HEAP______"<<endl<<endl;
//*MIN HEAP using PRIORITY QUEUE
priority_queue<int, vector<int>, greater<int>> q;
q.push(8);
q.push(80);
q.push(18);
q.push(28);
q.push(89);
q.push(48);

while (!q.empty())
{
    /* code */
    cout<<q.top()<<" ";
    q.pop();
}


return 0;
}