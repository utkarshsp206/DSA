/*

Input: ‘N’ = 3

Output: 
1
2 2 
3 3 3

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i; //Just change in this line 'i instead of j'
        }
        cout<<endl;
    }
}