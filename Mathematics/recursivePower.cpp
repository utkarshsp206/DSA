#include<iostream>
using namespace std;

//Computing x raised to the power y

int power(int x, int y){
    int temp;
	if (y == 0)
		return 1;
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return temp * temp;
	else
		return x * temp * temp;
}
 
int main() {
int x,y;
cout<<"Enter the value of x and y: ";
cin>>x>>y;
cout<<"The value of x raised to the power y is: "<<power(x,y);

return 0;
}

//TC: O(log n)