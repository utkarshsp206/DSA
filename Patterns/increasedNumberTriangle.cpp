/*

Input Format: N = 3
Result: 
1
2 3
4 5 6

*/

#include<bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n){
    int printer=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<printer<<" ";
            printer++;
        }
        cout<<endl;
    }
} 

int main() {
int n;
cout<<"Enter the value of n: ";
cin>>n;
nNumberTriangle(n);

return 0;
}