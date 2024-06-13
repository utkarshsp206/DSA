#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[], int size){
    //^Heapify
    while(size>0){
    for(int i=size/2-1;i>=0;i--){
        heapify(arr,size,i);
    }
    swap(arr[0],arr[size-1]);
    size--;
    }
}
 
int main() {
int arr[]={10,50,40,30,5};
int n=sizeof(arr)/sizeof(arr[0]);
heapSort(arr,n);
cout<<"Sorted Array: "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}