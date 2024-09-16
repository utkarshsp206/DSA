//! Generate all possible valid paranthesis combos with n pairs
#include<bits/stdc++.h>
using namespace std;

   void solve(vector<string> &ans, int n, int open, int close, string curr_str){
        //base case
        if(curr_str.size()==2*n){
            ans.push_back(curr_str);
            return;
        }
        if(open<n) solve(ans,n,open+1,close,curr_str+'(');
        if(close<open) solve(ans,n,open,close+1,curr_str+')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(ans,n,0,0,"");
        return ans;
    }
 
int main() {
int n = 3;
vector<string> ans = generateParenthesis(n);
for(auto it: ans){
    for(auto is:it){
        cout<<is;
    }
    cout<<endl;
}

return 0;
}