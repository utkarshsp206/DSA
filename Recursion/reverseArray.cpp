#include<bits/stdc++.h>
using namespace std;
 
 /*
 //Solution 1: Using Extra Array
int* reverseArray(int arr[],int n){
    int *rev = new int[n];
    for(int i=n-1,j=0;i>=0;i--,j++){
        rev[j]=arr[i];
    }
    return rev;
}
*/

/*
//Solution 2: Space-optimized iterative method
int* reverseArray(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
    return arr;
}
*/

//Solution 3: Recursive method
int* reverseArray(int arr[],int n,int start,int end){
    if(start<end){
        swap(arr[start],arr[end]);
        return reverseArray(arr,n,start+1,end-1);
    }
    return arr;
}

void printArray(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}



int main() {
int n;
cout<<"Enter the size of array: ";
cin>>n;
int arr[n];
cout<<"Enter the Array Elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}


// int *rev = reverseArray(arr,n);
// printArray(rev,n);

int *rev = reverseArray(arr,n,0,n-1);
printArray(rev,n);

return 0;
}