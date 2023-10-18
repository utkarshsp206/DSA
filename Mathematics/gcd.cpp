#include<iostream>
using namespace std;

//Program to find the GCD of two numbers

int GCD(int a, int b){
    if(a==b)
    return a;
    else if (a>b)
    return GCD(a-b,b);
    else
    return GCD(a,b-a);
}

int main() {
int a,b;
cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<"GCD of Two numbers is: "<<GCD(a,b);

return 0;
}

//TC: O(log(min(a,b)))