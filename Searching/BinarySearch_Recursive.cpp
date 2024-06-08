#include<bits/stdc++.h>
using namespace std;

int BinarySearchRec(int arr[], int N, int X,int low, int high){
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==X){
            return mid;
        }
        else if(arr[mid]>X){
            return BinarySearchRec(arr,N,X,low,high-1);// Recursive Function return value, either store it or directly return it
        }
        else{
            return BinarySearchRec(arr,N,X,low+1,high);
        }
    }
    return -1;
}
 
int main() {
int arr[]={1,2,3,4,5,6};
int N = sizeof(arr)/sizeof(arr[0]);
int x = 5;
int result = BinarySearchRec(arr,N,x,0,N-1);
if(result == -1)
cout << "Element is not present in array";
else
cout << "Element is present at index " << result;


return 0;
}