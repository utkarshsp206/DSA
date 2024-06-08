#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int N, int x){
    for(int i=0;i<N;i++){
        if(arr[i]==x)
        return i;
    }
    return -1;
}
 
int main() {
int arr[]={1,2,3,4,5,6};
int N = sizeof(arr)/sizeof(arr[0]);
int x = 5;
int result = LinearSearch(arr,N,x);
if(result == -1)
cout << "Element is not present in array";
else
cout << "Element is present at index " << result;

return 0;
}