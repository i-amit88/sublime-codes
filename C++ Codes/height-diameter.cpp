#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;   
    Node* right;   
    Node(int x){
        data = x;
        left =NULL;
        right =NULL;
    }
};


int heightCalc(Node* root){

    if(root == NULL) return 0;

    // int leftHeight = heightCalc(root->left);
    // int rightHeight = heightCalc(root->right);

    return max(heightCalc(root->left),heightCalc(root->right)) + 1;
}





int32_t main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<< "Height of the tree is : "<<heightCalc(root);

    return 0;
}