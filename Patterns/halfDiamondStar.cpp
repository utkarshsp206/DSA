/*

Input Format: N = 3
Result: 
  *  
  **
  ***  
  **
  *   

*/

#include<bits/stdc++.h>
using namespace std;

void upperTriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void lowerTriangle(int n){
    for(int i=n;i>0;i--){
         for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
 
int main() {
int n;
cout<<"Enter the value of n:";
cin>>n;
upperTriangle(n);
lowerTriangle(n-1);

return 0;
}