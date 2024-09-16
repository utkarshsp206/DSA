//! Find the index of the first occurence of the string2 in string1;

#include<bits/stdc++.h>
using namespace std;

int indexOfFirst(string string1, string string2){
    return string1.find(string2);
}
 
int main() {
string string1 = "Hello";

string string2 = "llo";

cout<<indexOfFirst(string1, string2);


return 0;
}