#include<bits/stdc++.h>
using namespace std;

int solve(int index, vector<int>& weight, vector<int> &values, int capacity){
    //* Base Case
    //* If there is only 1 item , then compare its weight with the capacity
    if(index==0){
        if(weight[0]<=capacity){
            return values[0];
        }
        else return 0;
    }

    int include = 0;

    if(weight[index]<=capacity){
        include = values[index] + solve(index-1, weight, values, capacity-weight[index]);
    }

    int exclude = solve(index-1, weight, values, capacity);

    int ans = max(include, exclude);
    return ans;
}

int knapSack(vector<int>&weight, vector<int>&values, int n, int maxWeight){
    return solve(n-1, weight,  values, maxWeight);
}


 
int main() {


return 0;
}