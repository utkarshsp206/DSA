/*

Input: ‘N’ = 3

Output: 

  *
 ***
*****

*/

#include<iostream>
using namespace std;
 
int main() {

int N;
cin>>N;
for (int i = 0; i < N; i++)
    {
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }

         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
return 0;
}