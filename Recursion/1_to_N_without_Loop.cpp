#include<bits/stdc++.h>
using namespace std;

void printValue(int n,int x){
    if(x>n)
    return ;
    cout<<x<<" ";
    return printValue(n,x+1);
}
 
int main() {
int n;
cout<<"Enter the value of n: ";
cin>>n;
printValue(n,1);

return 0;
}