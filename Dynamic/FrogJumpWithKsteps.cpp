#include<bits/stdc++.h>
using namespace std;

int solveUtil(int index, int k, vector<int>&height, vector<int>&dp){
    dp[0]=0;
    for(int i=1;i<index;i++){
        int mmSteps = INT_MAX;
        //* loop through all possible jumps from 1 to k
        for(int j=1;j<=k;j++){
            if((i-j)>=0){
                int jump = dp[i-j] + abs(height[i]-height[i-j]);
                mmSteps = min(jump,mmSteps);
            }
        }
        dp[i]=mmSteps;
    }
    return dp[index-1];
}

int solve(int n, int k, vector<int>&height){
    vector<int>dp(n,-1);
    return solveUtil(n, k, height, dp);
}
 
int main() {


return 0;
}