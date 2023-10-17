#include<iostream>
using namespace std;

//Recursive Solution

int factorial(int n){
    if(n<0)
    return -1;
    if(n==0)
    return 1;
    int fact = 1;
    fact = factorial(n-1)*n;
    return fact;
}

//Iterative Solution

int factorialIterative(int n){

    if(n<0)
    return -1;
    if(n==0)
    return 1;
    int fact=1;
    for(int i=2;i<n+1;i++){
        fact = fact*i;
    }
    return fact;
}
 
int main() {
int n;
cout<<"Enter any number: ";
cin>>n;
cout<<"Factorial of "<<n<<" is "<<factorial(n);
cout<<"Factorial of "<<n<<"using Iterative is "<<factorialIterative(n);

return 0;
}

//TC: O(n)
//Space: O(n) --> In Recursive, because of function call stack
//Space: O(1) --> In Iterative, because no extra space used
//We can reduce the Auxiliary space by using iterative solution