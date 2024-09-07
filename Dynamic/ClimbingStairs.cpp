// No. of ways you can reach the nth stair

#include<bits/stdc++.h>
using namespace std;
int climbingStairs(int n){
    vector<int> dp(n+1);
    if(n==1) return 1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
 
int main() {
int n;
cin>>n;
cout<<climbingStairs(n);

return 0;
}