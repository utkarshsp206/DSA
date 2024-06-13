/*
An array in given, the task is to convert the array into maxHeap
*/

#include<bits/stdc++.h>
using namespace std;

void buildHeap(int arr[], int n,int i){
    
        int largest = i;
        int leftIndex=2*i+1;
        int rightIndex=2*i+2;
        if(leftIndex<n && arr[largest]<arr[leftIndex]){
            largest = leftIndex;
        }
        if(rightIndex<n && arr[largest]< arr[rightIndex]){
            largest = rightIndex;
        }

        if(largest!=i){
            swap(arr[largest],arr[i]);
            buildHeap(arr,n,largest);
        }

}
 
int main() {
    int arr[]={30,40,16,30,50,33,45,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n/2-1;i>=0;i--){ //!IMPORTANT
        buildHeap(arr,n,i);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


return 0;
}
