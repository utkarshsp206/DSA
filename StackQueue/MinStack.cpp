#include<bits/stdc++.h>
using namespace std;
class MinStack {
    stack<pair<int,int>> st;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{
            st.push({val,min(val,st.top().second)});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};


 
int main() {
MinStack *obj = new MinStack();
obj->push(4);
obj->push(5);
obj->push(1);
obj->push(6);
obj->push(3);
cout<<obj->getMin();


return 0;
}