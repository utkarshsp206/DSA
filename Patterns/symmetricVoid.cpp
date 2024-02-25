/*
Input Format: N = 3
Result: 
******
**  **
*    *
*    *
**  **
******

*/
#include <iostream>
using namespace std;

void symmetry(int n) {
    for(int i=1;i<=2*n;i++){
        int noOfStars = 2*n - 2*(i-1);
        if(i>n) noOfStars = (i-n)*2;
        int noOfSpaces = 2*(i-1);       //numberofspaces = 2n - number of star
        if(i>n) noOfSpaces = 4*n - 2*i;
        for(int j=1;j<=2*n;j++){
            if(j>noOfStars/2 && j< noOfStars/2 + noOfSpaces +1){

                cout<<" ";

            }else{

                cout<<"*";

            }

            cout<<" ";

        }

        cout<<endl;

    }

}  

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    symmetry(N);
    return 0;
}
