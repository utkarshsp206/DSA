//All Subsequences with Sum K

#include<bits/stdc++.h>
using namespace std;

void printSubs(int ind, vector<int> &ds, int arr[], int n, int sum, int currSum){
    if(ind==n){
        if(currSum==sum){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[ind]);
    currSum+=arr[ind];
    printSubs(ind+1,ds,arr,n,sum,currSum);

    ds.pop_back();
    currSum-=arr[ind];
    printSubs(ind+1,ds,arr,n,sum,currSum);
}

int main() {
int arr[]={1,2,1};
int n=3;
int sum = 2;
vector<int> ds;
printSubs(0, ds, arr, n, sum, 0);

return 0;
}