#include<iostream>
using namespace std;
 
/*
Naive Approach: Find Factorial --> Calculate number of Zeroes
But it will cause overflow for even slightly greater numbers

Efficient Approach: Count number of 5s and 2s in the number, but since 5 is going to be less than 2 so count only 5s
*/

int trailZero(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res = res + n/i;
    }
    return res;
}


int main() {
int n;
cout<<"Enter the number: ";
cin>>n;
cout<<"Number of Zeroes in factorial of "<<n<<" is "<<trailZero(n);

return 0;
}

//TC: O(log n)