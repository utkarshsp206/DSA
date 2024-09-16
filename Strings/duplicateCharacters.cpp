//! Print all the duplicate characters in a string

#include<bits/stdc++.h>
using namespace std;

void dupChar(string s){
    map<char, int> mpp;
    for(auto it:s){
        if(mpp.find(it)==mpp.end()){
            mpp[it]=1;
        }
        else{
            mpp[it]++;
        }
    }

    for(auto it: mpp){
        if(it.second>1){
            cout<<it.first<<"-> "<<it.second;
            cout<<endl;
        }
    }
}
 
int main() {
string s = "geeksforgeeks";
dupChar(s);

return 0;
}