/*
Input Format :
The first line of input contains an integer ‘T’, denoting the number of test cases. 

The first line of each test case contains a single unsigned integer ‘N’ whose bits are to be reversed.
Output Format :
For each test case, print the number obtained after reversing the bits.

Print the output for each test case in a separate line.

*/

#include<bits/stdc++.h>
using namespace std;

int reverseBits(unsigned int N){
    long ans = 0;
    for(int i=0;i<32;i++){
        ans = ans + ((N&1)*pow(2,32-i));
        N=N>>1;
    }
    return ans;
}
 
int main() {
int T;
cin>>T;
while(T--){
    unsigned int N;
    cin>>N;
    cout<<reverseBits(N)<<endl;
}

return 0;
}