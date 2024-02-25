/*

Input Format: N = 3
Result: 
  A  
 ABA 
ABCBA

*/

#include<bits/stdc++.h>
using namespace std;

void alphaHill(int n){
    for (int i = 0; i < n; i++)
    {
        //Spaces
        for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }

        //Characters
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=0;j< 2*i+1;j++){
          cout<<ch;
          if(j<breakpoint)
          ch++;
          else
          ch--;

        }

        //Spaces
         for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}
 
int main() {
int n;
cout<<"Enter the value of n: ";
cin>>n;
alphaHill(n);

return 0;
}