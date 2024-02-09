
#include<bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n) {
    // Write your code here.
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    nNumberTriangle(n);
}