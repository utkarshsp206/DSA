#include<bits/stdc++.h>
using namespace std;
 

int kthSmallest(int arr[], int k,int n){
    priority_queue<int> q;

    //^STEP 1
    for(int i=0;i<k;i++){
        q.push(arr[i]);
    }

    //^STEP 2
    for(int i=k;i<n;i++){
        if(arr[i]<q.top()){
            q.pop();
            q.push(arr[i]);
        }
    }

    //^STEP 3
    int res=q.top();
    return res;
}


int main() {
int n;
cin>>n;
int arr[n];
int k;
cin>>k;
cout<<"Enter array elements: "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ele = kthSmallest(arr, k, n);
cout<<ele;


return 0;
}