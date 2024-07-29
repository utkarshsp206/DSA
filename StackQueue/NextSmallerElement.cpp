//! LeetCode Problem 1475. Final Prices With a Special Discount in a Shop

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        stack<int> st;
        for(int i=prices.size()-1;i>=0;i--){
            while(!st.empty() && st.top()>prices[i]){
                st.pop();
            }
            if(st.empty()){
                result.insert(result.begin(),prices[i]);
                st.push(prices[i]);
            }
            else{
                result.insert(result.begin(),prices[i]-st.top());
                st.push(prices[i]);
            }
        }
        return result;
    }
};
 
int main() {


return 0;
}