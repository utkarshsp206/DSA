//* Implementation of Stack using Array

#include<bits/stdc++.h>
using namespace std;

class Stack{
    int top;
    int size;
    int arr[];
    
    public:
    Stack(int n){
        top=-1;
        size=n;
        arr[size];
    }

    void push(int n){
        if(top>=size) cout<<"Overflow!!\n";
        top++;
        arr[top]=n;
    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }

    void pop(){
        if(top==-1) cout<<"Underflow\n";
        else top--;
    }

    int top(){
        return arr[top];
    }

};

int main() {
Stack st(5);
st.push(6);
st.display();

return 0;
}