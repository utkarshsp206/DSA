/*
A list in STL is a contiguous container that allows the inserting and erasing of elements in constant time and iterating in both directions.
*/

#include<bits/stdc++.h>
using namespace std;
 
int countDigits(int n){
	// Write your code here.	
	list<int> s;
	int temp = n;
	while(temp !=0){
		int rem = temp%10;
		temp = temp/10;
		s.push_back(rem);
	}
    int count = 0;
    for(auto t: s){
        if(n%t==0){
            count++;
        }
    }

    return count;

}

int main() {
int n;
cout<<"Enter the value of n: ";
cin>>n;
cout<<countDigits(n);

list<int> l2;
l2.push_back(2);
l2.push_back(3);
l2.push_front(1); //vector doesn't have push_front while list does because it uses doubly linkedlist
for(auto it : l2){
	cout<<it<<" ";
}


return 0;
}