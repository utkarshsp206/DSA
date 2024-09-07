// Print all the subsequences of a given array

#include<bits/stdc++.h>
using namespace std;

void printSubs(int ind, vector<int> &ds, int arr[],int n){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    // add the index to the subsequence
    ds.push_back(arr[ind]);
    printSubs(ind+1,ds,arr,n);

    // do not take the current index to the subsequence

    ds.pop_back();
    printSubs(ind+1,ds,arr,n);
}

int main(){
    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    printSubs(0,ds,arr,n);
    return 0;
}