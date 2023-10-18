#include<bits/stdc++.h>
using namespace std;

/*
--> Except 2 and 3, every prime number can be represented as 6n-1 or 6n+1
*/

//Efficient Solution

bool primeNaive(int n){
    if(n<=1)
    return 0;
    else if(n==2)
    return 1;
    else {
        for(int i=2;i<sqrt(n);i++){
            if(n%i==0)
            return 0;
        }
        return 1;
    }
}

//TC: O(sqrt(n))

//More Efficient Solution

bool prime(int n){
     if(n<=1)
    return 0;
    else if(n==2 || n==3)
    return 1;
    if (n % 2 == 0 || n % 3 == 0)
		return false;
    
    for (int i = 5; i <= sqrt(n); i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
    
    return 1;
}

//TC: O(sqrt(n)) but more effecive than earlier one.

int main() {
int n;
cout<<"Enter any number to check: ";
cin>>n;
cout<<primeNaive(n);
cout<<prime(n);

return 0;
}