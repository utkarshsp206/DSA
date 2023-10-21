#include<bits/stdc++.h>
using namespace std;

//We are given a number n. The task is to print all prime factors of n. 

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

int primeFactors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(prime(i)==1){
                cout<<i<<" ";
            }
        }
    }

}


int main() {
cout<<"Enter any number n: ";
int n;
cin>>n;
cout<<"The Prime Factors of "<<n<<" are: ";
primeFactors(n);

return 0;
}