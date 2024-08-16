#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 class Solution{
    public:
    vector<int> iterativeInorder(TreeNode* root){
        stack<TreeNode*> st;
        TreeNode *node = root;
        vector<int> ans;
        while(true){
            if(node!=NULL){
                st.push(node);
                node = node->left;
        
            }
            else{
                if(st.empty()==true) break;
                node = st.top();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }
 };
 
int main() {


return 0;
}