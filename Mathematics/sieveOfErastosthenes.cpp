#include<bits/stdc++.h>
using namespace std;

//Sieve of Erastosthenes is an efficient algorithm to find all prime numbers less than a given number 'n'
/*
Approach: According to the algorithm we will mark all the numbers which are divisible by 2 and are greater than or equal to the square of it. 
Now we move to our next unmarked number 3 and mark all the numbers which are multiples of 3 and are greater than or equal to the square of it.  
We move to our next unmarked number 5 and mark all multiples of 5 and are greater than or equal to the square of it.  
Continue this process and numbers left in the series will be the prime numbers.
*/

void SieveOfEratosthenes(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

    //Printing
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }

}

int main() 
{
 int n;
 cout<<"Enter any number: ";
 cin>>n;
 SieveOfEratosthenes(n);

return 0;
}