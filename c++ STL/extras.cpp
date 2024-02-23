#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int num = 6;
    int cnt = __builtin_popcount(num); //return the count of set binary digits (number of 1s)
    cout<<cnt<<"\n";
    long long numLong = 3456789;
    int cntLong = __builtin_popcountll(numLong);
    cout<<cntLong<<" \n";

    string s="123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));


return 0;
}