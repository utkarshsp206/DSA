/*

Input Format: N = 3
Result: 
1
01
101

*/

#include<bits/stdc++.h>
using namespace std;
 
 void nBinaryTriangle(int n) {
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            //if i odd then start with 1
            //if i even start with 0
            cout<<(i+j)%2<<" ";
        }
        cout<<endl;
    }
}

int main() {
int n;
cout<<"Enter the value of n";
cin>>n;
nBinaryTriangle(n);


return 0;
}
