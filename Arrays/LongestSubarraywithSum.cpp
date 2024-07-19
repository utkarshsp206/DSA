// Given an array, return the length of the longest subarray with sum K



#include<bits/stdc++.h>
using namespace std;

//^ Approach 1: Brute Force
int lonestSubarray(vector<int> arr, int K){
    int n = arr.size();
    int maxLength = 0;
    for(int i=0;i<n;i++){
        int sum  = arr[i];
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum==K) maxLength = (j-i+1);
        }
    }
    return maxLength;
}


//^ Better Approach: Using Hashing (Prefix Sum)
int longestSubarrayBetter(vector<int> arr, int K){
    int n = arr.size();
    map<int,int> prefixSum;
    int maxLength=0;
    int preSum = 0;
    for(int i =0;i<n;i++){
        preSum+=arr[i]; 
        if(preSum==K) maxLength=i+1;

        int rem = preSum-K;
        if(prefixSum.find(rem)!=prefixSum.end()){
            int len = i-prefixSum[rem];
            maxLength = max(len,maxLength);
        }
        if(prefixSum.find(preSum)==prefixSum.end()){
        prefixSum[preSum]=i;
        }

    }
    return maxLength;
}
 
int main() {
vector<int> arr = {2,3,1,1,1,1,4,2,3};
int K = 3;

int l = longestSubarrayBetter(arr,K);
cout<<l<<endl;

return 0;
}