// Minimum Energy frog has to spend to reach the nth stair

#include <bits/stdc++.h> 
using namespace std;
int jump(int i,vector<int>&heights,vector<int>&dp){
    if(i==0){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int left=jump(i-1,heights,dp)+abs(heights[i]-heights[i-1]);
    int right=INT_MAX;
    if(i>1){right=jump(i-2,heights,dp)+abs(heights[i]-heights[i-2]);}
    return dp[i]=min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
    return jump(n-1,heights,dp);
}