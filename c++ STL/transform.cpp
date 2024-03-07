/*
//Transform Function

transform() in C++ is used in two forms: 
1. Unary Operation : Applies a unary operator on input to convert into output 

transform(Iterator inputBegin, Iterator inputEnd, 
         Iterator OutputBegin, unary_operation) 

2. Binary Operation: Applies a binary operator on input to convert into output 

transform(Iterator inputBegin1, Iterator inputEnd1, 
         Iterator inputBegin2, Iterator OutputBegin, 
         binary_operation) 
*/


   
// C++ program to demonstrate working of
// transform with unary operator.
#include <bits/stdc++.h>
using namespace std;
 
int increment(int x) {  return (x+4); }
 
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    // Apply increment to all elements of
    // arr[] and store the modified elements
    // back in arr[]
    transform(arr, arr+n, arr, increment);
 
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
 
    return 0;
}