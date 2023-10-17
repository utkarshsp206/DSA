#include<iostream>
using namespace std;

int factorial(int n){
    if(n<0)
    return -1;
    if(n==0)
    return 1;
    int fact = 1;
    fact = factorial(n-1)*n;
    return fact;
}
 
int main() {
int n;
cout<<"Enter any number: ";
cin>>n;
cout<<"Factorial of "<<n<<" is "<<factorial(n);

return 0;
}

//TC: O(n)