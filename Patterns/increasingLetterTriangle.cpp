/*

Sample Input 1:
3
Sample Output 1:
A
A B
A B C

*/

#include<bits/stdc++.h>
using namespace std;

void letterTriangle(int n){
    for(int i=65;i<=65+n;i++){
        for(int j=65;j<=i;j++){
            char c = j;
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