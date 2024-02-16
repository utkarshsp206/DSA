/*

Input: ‘N’ = 3

Output: 

A B C
A B
A

*/

#include<bits/stdc++.h>
using namespace std;

void letterTriangle(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            int ch = 64+j;
            char c = ch;
            cout<<c<<" ";
        }
        cout<<endl;
    }
} 

int main() {
int n;
cout<<"Enter the value of n: ";
cin>>n;
letterTriangle(n);

return 0;
}