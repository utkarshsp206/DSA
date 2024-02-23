#include<bits/stdc++.h>
using namespace std;
 
int main() {
stack<int> st;

st.push(1);
st.push(2);
st.push(3);
st.emplace(4);

// while(st.top()){
//     cout<<st.top();
//     st.pop();
// }

cout<<st.size()<<endl;

stack<int> st2;
st2.push(1);
st2.push(2);

cout<<"Size of st2: "<<st2.size()<<endl;

st2.swap(st);
cout<<"Size of st2: "<<st2.size();





return 0;
}