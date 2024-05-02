//Recursive method to find the maximum of the tree.

#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

int MaxOfTree(Node *root){
    int max=root->data;
    if(root->left!=NULL){
        int leftMax=MaxOfTree(root->left);
        max=max>leftMax?max:leftMax;
    }
    if(root->right!=NULL){
        int rightMax=MaxOfTree(root->right);   
        max=max>rightMax?max:rightMax;
    }
    return max;
}

int main() {

Node *root = new Node(0);
root->left = new Node(2);
root->right = new Node(3);
root->right->right = new Node(9);
root->right->left = new Node(5);
root->left->left = new Node(6);
root->left->right = new Node(7);

int maximum = MaxOfTree(root);
cout<<"Maximum of the three is: "<<maximum;

return 0;
}