#include<bits/stdc++.h>
using namespace std;
 
int main() {
//MAP - holds the value in the form of key-value pair, where key must be unique

map<int,int> m;
map<int,string> studentDetails;

studentDetails.insert({6883,"Utkarsh"});
studentDetails.insert({6913,"Aman"});
studentDetails.insert({6915,"Pratham"});

studentDetails[6915] = "PrathamJain";

for(auto it: studentDetails){
    cout<<it.first<<" : "<<it.second<<endl;
}


cout<<studentDetails.size();


//Multimap : Same as map, but duplicate keys allowes
//Unordered map : Same as map, but unordered . Most of the operations are O(1)

return 0;
}