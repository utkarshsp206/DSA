#include<bits/stdc++.h>
using namespace std;


bool customComp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;
}

 
int main() {
vector<int> v{1,5,2,7,3,8,4};
for(int i : v){
    cout<<i<<" ";
}
cout<<"\n";
sort(v.begin(),v.end());
for(int i : v){
    cout<<i<<" ";
}
cout<<"\n";
//To sort in descending order use greater<int>
sort(v.begin(),v.end(),greater<int>());
for(int i : v){
    cout<<i<<" ";
}
cout<<"\n";

//To sort array
// int arr[]={1,4,2,4,5,2,6,7};
// int n = sizeof(arr)/sizeof(arr[0]);
// sort(arr,arr+n);
// for(int i :arr){
//     cout<<i<<" ";
// }
cout<<"\n";

//To sort only a particular section of the array/vector
int arr2[]={1,4,2,4,5,2,6,7};
int n = sizeof(arr2)/sizeof(arr2[0]);
sort(arr2+4,arr2+n);
for(int i :arr2){
    cout<<i<<" ";
}
cout<<endl;


//++++++++++++++++++IMPORTANT - Custom Sorting++++++++++++++++++++++++//
// to do sorting based on our own conditions (other than just ascending and descending) we can modify the comparator function
vector<pair<int,int>> vCustom{{2,1},{1,2},{1,3},{4,1},{5,2}};
/*
Sorting Conditions: 
1. Ascending order of second element of each pair
2. If the second element of any two pairs is same, then 
3. Sort in descedning order on the basis of the first element of the conflicting pairs
*/

/*
Now we have to design a custom comparator - which will be a function of return type boolean which will take two parameters of pair type and perform conditions
*/



sort(vCustom.begin(),vCustom.end(),customComp);
for(auto i: vCustom){
    cout<<i.first<<" "<<i.second<<endl;
}


return 0;
}