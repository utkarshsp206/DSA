#include<bits/stdc++.h>
using namespace std;
 
int main() {
vector<int> v;
v.push_back(2);
v.emplace_back(3);

// cout<<v[0]<<" "<<v.at(1);

v.assign(2,10);
// for(auto it : v){
//     cout<<it<<" ";
// }

vector<int> v2(v);

// for(auto it : v2){
//     cout<<it<<" ";
// }

vector<int> v3 = {1,2,3,4};
v3.swap(v2);

// for(vector<int> :: iterator it = v3.begin(); it!=v3.end(); it++){    //v.begin gives the reference of first index while v.end gives the reference of nth index (not the last one)
//     cout<< *it <<" ";
// }

vector<string> s;
s.push_back("Hello");
cout<<s[0];

cout<<v3.size();

for(auto it : v3){
    cout<<it<<" ";
}

v3.insert(v.begin(),2,20);// at v.begin(), insert 2 times 10 v3 = {20,20,10,10}

v3.pop_back();

v3.clear(); //erase all the elements of v3

cout<<s.empty();

for(auto it: s){
    cout<<it<<" ";
}

if(v3.empty()){
    cout<<"s not empty!!";
}

return 0;
}