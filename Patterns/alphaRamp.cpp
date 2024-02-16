/*

Input Format: N = 3
Result: 
A
B B
C C C

*/

#include<bits/stdc++.h>
using namespace std;
 
void alphaRamp(int n){
    for(int i=65;i<=65+n;i++){
        for(int j=65;j<=i;j++){
            char ch = i;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main() {
int n;
cout<<"Enter the value of n: ";
cin>>n;
alphaRamp(n);

return 0;
}