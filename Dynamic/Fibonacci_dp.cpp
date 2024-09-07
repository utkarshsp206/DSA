#include<bits/stdc++.h>
using namespace std;

//* Using Memoization
int fibonacci(int n, vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fibonacci(n-1, dp)+fibonacci(n-2, dp);
}
//! TC: O(N)  SC: O(N)+O(N)

//* Using Tabulation
int fiboTab(int n, vector<int> &dp){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<n+1;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
//! TC: O(N)  SC: O(N)

//* Space Optimization
int fiboTabSpace(int n){
    int prev=1;
    int prev2=0;
    for(int i=2;i<n+1;i++){
        int curr = prev+prev2;
        prev2=prev;
        prev=curr;
    }
    return prev;
} 
//! TC: O(N)  SC: O(1)

int main() {
int n=5;
vector<int> dp(n+1,-1);
cout<<fiboTabSpace(n);

return 0;
}