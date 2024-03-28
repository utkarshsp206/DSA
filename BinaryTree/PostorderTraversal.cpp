#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;    
    Node *right;    

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printPostorder(Node *root){
    if(root!=NULL){
        printPostorder(root->left);
        printPostorder(root->right);
        cout<<root->data<<" ";
    }
}



int main() {

Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->right->right = new Node(4);
root->right->left = new Node(5);
root->left->left = new Node(6);
root->left->right = new Node(7);

printPostorder(root);

return 0;
}