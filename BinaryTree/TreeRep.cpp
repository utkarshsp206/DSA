#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    //Constructor to initialize values
    Node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};
 
int main() {

Node *root = new Node(1);
root->left = new Node(2);
root->right= new Node(3);
root->left->left = new Node(4);


/*

Tree will be formed as:
      1
    2   3
  4

*/

return 0;
}