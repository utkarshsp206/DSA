#include<bits/stdc++.h>
using namespace std;

int numofSubs(int ind, int currSum, int sum, int arr[], int n){
    if(currSum>sum) return 0;

    if(ind==n){
        if(currSum==sum) return 1;
        else return 0;
    }
    currSum+=arr[ind];
    int l = numofSubs(ind+1, currSum, sum, arr, n);
    currSum-=arr[ind];
    int r = numofSubs(ind+1, currSum, sum, arr, n);

    return l+r;
}
 
int main() {
    int arr[]={2,3,1,4,2};
    int n = 5;
    int sum = 4;
    cout<<numofSubs(0,0,sum,arr,n);

    return 0;
}