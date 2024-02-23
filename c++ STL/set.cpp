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

cout<<"**********************MULTISET********************************"<<endl;
//Multiset holds in sorted order but not unique
multiset<int> ms;
ms.insert(3);//{3}
ms.insert(1);//{1,3}
ms.insert(1);//{1,1,3}
ms.insert(1);//{1,1,1,3}

ms.erase(1); //{3} it will erase all 1s

//want to delete only one 
ms.erase(ms.find(1)); //deletes the address of the first iterator 
ms.erase(ms.find(1), ms.find(1)++); // [first, last)

cout<<"**********************UNORDERED-SET********************************"<<endl;
//Unordered Set holds unique but not in the sorted order, it randomly places anywhere
unordered_set<int> us;
//rest all functions are same



return 0;
}