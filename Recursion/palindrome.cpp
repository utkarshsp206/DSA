#include<bits/stdc++.h>
using namespace std;

string reverseString(string s,int start,int end){
    if(start<end){
        swap(s[start],s[end]);
        return reverseString(s,start+1,end-1);
    }
    return s;
}
 
bool checkPalindrome(string s){
    string temp = s;
    if(temp == reverseString(s,0,s.length()-1))
    return true;
    else
    return false;
}

int main() {
string s;
cout<<"Enter the String: ";
cin>>s;
cout<<checkPalindrome(s);

return 0;
}