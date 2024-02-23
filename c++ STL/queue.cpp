#include<bits/stdc++.h>
using namespace std;
 
int main() {
queue<int> q;
q.push(4);
q.push(5);
q.push(6);
// while(q.size()){
//     cout<<q.front()<<" ";
//     q.pop();
// }

cout<<q.back();


//+++++++++++++++++ Priority Queue +++++++++++++++++++++++++//

priority_queue<int> pq; //if declared this way, it will generate a max-heap
priority_queue<int , vector<int> , greater<int>> pqMin; // if declared this way, it will generate a min-heap

pq.push(5); // {5}
pq.push(2); // {5,2}
pq.push(8); // {8,5,2}
pq.emplace(10); // {10,8,5,2}

cout<<pq.top(); //{10}
pq.pop(); //removes 10


pqMin.push(5); // {5}
pqMin.push(2); // {2,5}
pqMin.push(8); // {2,5,8}
pqMin.emplace(10); // {2,5,8,10}

cout<<pqMin.top(); //{2}
pqMin.pop(); //removes 2

return 0;
}