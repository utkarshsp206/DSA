#include<bits/stdc++.h>
using namespace std;
 
int main() {
vector<int> v {1,2,4,3};
make_heap(v.begin(),v.end());
cout<<v.front();
cout<<endl;
v.push_back(20);
push_heap(v.begin(),v.end());
cout<<v.front();
return 0;
}