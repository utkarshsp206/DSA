#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int N, int X){
    int low=0, high=N-1, mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==X){
            return mid;
        }
        else if(arr[mid]>X){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return -1;
}


int main() {
int arr[]={1,2,3,4,5,6};
int N = sizeof(arr)/sizeof(arr[0]);
int x = 0;
int result = BinarySearch(arr,N,x);
if(result == -1)
cout << "Element is not present in array";
else
cout << "Element is present at index " << result;


return 0;
}