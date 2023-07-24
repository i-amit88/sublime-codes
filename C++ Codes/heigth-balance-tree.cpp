#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }

    if(isBalanced(root->left) == false) return false;
    if(isBalanced(root->right) == false) return false;
}


int32_t main(){
    
  Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
}