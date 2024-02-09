/*

Input:  ‘N’ = 3

Output: 
* 
* *
* * *

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){  //Change in this line 'j<=i'
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}