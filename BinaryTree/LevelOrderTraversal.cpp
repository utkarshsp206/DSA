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

void printLevel(Node *root){
    if(root==NULL) return;
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false){
        Node *curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(root->left!=NULL){
            q.push(curr->left);
        }
        if(root->right!=NULL){
            q.push(curr->right);
        }
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

cout<<"Level order traversal is : ";
printLevel(root);

return 0;
}