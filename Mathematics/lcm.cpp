#include<iostream>
using namespace std;

/* 
LCM of Two numbers can be easily found out by the formula: a x b = LCM(a,b) x HCF(a,b)
*/

int GCD(int a, int b){
    if(a==b)
    return a;
    if(a>b)
    return GCD(a-b,b);
    else 
    return GCD(a,b-a);
}

int LCM(int a,int b){
    return (a*b)/GCD(a,b);
}


int main() {
int a,b;
cout<<"Enter two numbers: ";
cin>>a>>b;
cout<<LCM(a,b);

return 0;
}

//TC: Same as that of GCD O(log(min(a,b)))