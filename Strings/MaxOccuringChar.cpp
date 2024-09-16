#include<bits/stdc++.h>
using namespace std;
 
int main() {
string s;
cout<<"Enter a string: ";
getline(cin,s);

int count[26]={0};
for(int i=0;i<s.length();i++){
    char ch = s[i];
    if(islower(ch)){
        count[ch-'a']++;
    }
    else{
        count[ch-'A']++;
    }
}
//Now we have our count array ready
int maxIn=0;
for(int i=0;i<26;i++){
if(count[i]>count[maxIn]) maxIn = i;
}

char ans = 'a'+maxIn;
cout<<ans;

return 0;
}