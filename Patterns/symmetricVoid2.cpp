/*
Input Format: N = 3
Result: 
******
**  **
*    *
*    *
**  **
******

*/

#include<bits/stdc++.h>
using namespace std;

void downwardCrown(int N){
    for(int i=N;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        for(int j=2*(N-i);j>0;j--){
            cout<<" ";
        }
         for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

void upwardCrown(int N){
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=2*(N-i);j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
 
int main() {
int N;
N = 3;
downwardCrown(N);
upwardCrown(N);

return 0;
}