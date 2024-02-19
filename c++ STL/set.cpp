/*
A set in STL is a container that stores unique elements in a particular order. Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.
*/

#include<bits/stdc++.h>
using namespace std;
 
int main() {
set<int> s;   //always stores in the sorted order
s.insert(1);
s.insert(6);
s.insert(4);
s.insert(4);
s.insert(1);
s.insert(2);

cout<<s.size()<<endl;
for(auto t:s){
    cout<<t<<" ";
}
cout<<"\n";

set<int> s2{1,2,3};
for(auto t2: s2){
    cout<<t2<<" ";
}
cout<<endl;

s.swap(s2); //swap all elments of s in s2
for(auto t2: s2){
    cout<<t2<<" ";
}
cout<<endl;

cout<<"**********************SET for STRINGS********************************"<<endl;

set<string> str{"Lt","Capt","Maj","Lt.Col","Col"}; //We can initialise like this as well
for(auto t3: str){
    cout<<t3<<" ";
}
cout<<endl;
cout<<str.size()<<endl;
cout<<str.empty()<<endl;
str.clear();
cout<<str.empty();


return 0;
}