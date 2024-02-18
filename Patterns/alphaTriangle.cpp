/*
Input: ‘N’ = 3
Output: 
C
C B 
C B A
*/

#include<bits/stdc++.h>
using namespace std;
 
void alphaTriangle(int n){
    for(int i=1;i<=n;i++){
        int l = 65+n-1;
        for(int j=1;j<=i;j++){
            
            char ch = l;
            cout<<ch<<" ";
            l--;
        }
        cout<<endl;
    }
}

int main() {
int n;
cout<<"Enter the value of n: ";
cin>>n;
alphaTriangle(n);

return 0;
}