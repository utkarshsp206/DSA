/*
Largest Element in Array
*/

#include<bits/stdc++.h>
using namespace std;

int largestElementLoop(int *arr,int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//TC: O(N)


int largestElementSort(vector<int> arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
//TC: O(NlogN)
 

int main() {
vector<int> arr2= {1,2,3,9,5,6,7,8,0};
int arr[]={1,2,3,4,5,67,7};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<largestElementLoop(arr,n);
cout<<endl;
cout<<largestElementSort(arr2);
cout<<endl;

return 0;
}