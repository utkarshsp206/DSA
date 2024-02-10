/*

Problem Statement: Given an integer N, print the following pattern : 

***********
 *********
  *******
   ***** 
    ***    
     *

*/

#include <bits/stdc++.h>
using namespace std;

void invertedStarPyramid(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}

int main()
{   
    int N = 5;

    invertedStarPyramid(N);

    return 0;
}