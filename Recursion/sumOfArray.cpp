#include<bits/stdc++.h>
using namespace std;

int findSum(int A[], int N) 
{ 
    if (N <= 0) 
        return 0; 
    return (findSum(A, N - 1) + A[N - 1]); 
} 
  
int main() 
{ 
    int A[] = { 1, 2, 3, 4, 5 }; 
    int N = sizeof(A) / sizeof(A[0]); 
   cout<<findSum(A, N); 
    return 0; 
} 