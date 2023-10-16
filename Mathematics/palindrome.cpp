#include<iostream>
using namespace std;

// Given an integer, write a function that returns true if the given number is palindrome, else false.
// First we'll reverse the number and check if num==reverse

bool palindrome(int num){
    int rev=0;
    int temp = num;
    while(temp!=0){
        rev = (rev*10) + (temp%10);
        temp = temp/10;
    }
    return (rev==num);
}

int main() {

    int num;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<palindrome(num);

return 0;
}