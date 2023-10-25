#include<iostream>
using namespace std;

//Iterative Solution to calculate the power of a number 
//TC: O(log n)
//Aux space O(n)

int iterativePower(int x, int y){
    int res = 1; // Initialize result

	while (y > 0) {
		// If y is odd, multiply x with result
		if (y & 1)
			res = res * x;

		// y must be even now
		y = y >> 1; // y = y/2
		x = x * x; // Change x to x^2
	}
	return res;

}

int main() {
int x,y;
cout<<"Enter the value of x and y: ";
cin>>x>>y;
cout<<"The value of x raised to the power y is: "<<iterativePower(x,y);

return 0;
}