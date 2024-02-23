#include<bits/stdc++.h>
using namespace std;
 
int main() {
pair<int,int> p = {1,2};
cout<<p.first;
cout<<p.second;

pair<int,pair<int,int>> p2 = {1,{1,2}};
cout<<p2.first;
// cout<<p2.second;   cannot print a pair using cout
cout<<p2.second.second;


//We can also generate an array of pair type
pair<int,int> arr[]={{1,2},{2,3},{3,4}};
cout<<arr[0].first;
return 0;
}