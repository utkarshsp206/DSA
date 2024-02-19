/*
An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.
*/

#include<bits/stdc++.h>
using namespace std;
 
int main() {
unordered_set<int> s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(3);
s.insert(4);
for(auto t : s){
    cout<<t;
}
cout<<endl;
if(s.count(3)){
    cout<<"YES";
    cout<<endl;
}
if(s.find(2)==s.end()){
    cout<<"YES"<<endl;;
}
cout<<s.size();
cout<<endl;
s.erase(2);
for(auto t : s){
    cout<<t;
}
cout<<endl;
s.clear();
cout<<s.size();
return 0;
}