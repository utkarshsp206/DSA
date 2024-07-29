#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> result;
        for(int i=nums.size()-1;i>=0;i--){
            st.push(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            if(st.empty()){
                result.insert(result.begin(),-1);
                st.push(nums[i]);
            }
            else{
                result.insert(result.begin(),st.top());
                st.push(nums[i]);
            }
        }
        return result;
    }
};

int main() {


return 0;
}