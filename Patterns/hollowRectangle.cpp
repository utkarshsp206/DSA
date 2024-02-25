/*

Input Format: N = 6
Result:   
******
*    *
*    *
*    *
*    *
******

*/

#include <bits/stdc++.h>
using namespace std;

void hollowRect(int n)
{

     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
             else cout<<" ";
         }
          cout<<endl;
     }
      
}

int main()
{   
    int N;
    cin>>N;
    
    hollowRect(N);

    return 0;
}