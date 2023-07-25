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

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left),height(root->right)) +1;
}

bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }

    if(isBalanced(root->left) == false) return false;
    if(isBalanced(root->right) == false) return false;
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <= 1) {
        return true;
    }
    else return false;
}


int32_t main(){
    
  Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<isBalanced(root)<<endl;

    if(isBalanced(root)) cout<<"Balanced Tree";
    else cout<<"Not Balanced Tree";
}