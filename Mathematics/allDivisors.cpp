#include<bits/stdc++.h>
using namespace std;

//To print all the divisors of a number
/*
 There are two approaches, 1. Naive Approach with complexity O(n)
 2. Efficient Approach to reduce the complexity to O(sqrt(n))
*/

void divisorsNaive(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<" ";
    }
}     //TC: O(n)

void divisors(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                cout<<i<<" ";
            }
            else{
                cout<<i<<" "<<n/i<<" ";
            }
        }
    }
}    //TC: O(sqrt(n))

int main() {
int n;
cout<<"Enter any number n: ";
cin>>n;
cout<<"The divisors of "<<n<<" are: ";
divisorsNaive(n);
cout<<"Using Efficient Approach: ";
divisors(n);

return 0;
}