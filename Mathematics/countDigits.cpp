#include<iostream>
using namespace std;

int countDigits(int num){
    int res=0;

    if(num==0){
        return 1;
    }

    while(num>0){
        num = num / 10;
        res++;
    }
    return res;
} 

int main() {
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<"Number of Digits in "<<num<<" is "<<countDigits(num);
    return 0;

}