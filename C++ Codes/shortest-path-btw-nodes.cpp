#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node*left;
    struct Node* right;

    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};


Node* LCA(Node* root ,int n1 ,int n2){
    if(root == __null) return NULL;

    if(root->data == n1 || root->data == n2) return root;  // if we got the node

    Node* left = LCA(root->left,n1,n2);  // checks for left n1 node
    Node* right = LCA(root->right,n1,n2); // checks for right n2 node

    if(left != NULL && right != NULL) return root;  // if got the ancestor return

    if(left == NULL && right== NULL) return NULL; // if we does'nt got the ancestor return null
    if(left != NULL) return LCA(root->left,n1,n2);

    return LCA(root->right,n1,n2);
}



int32_t  main(){

       /*    1
           /  \
           2   3
          / \ / \
          4 5 6  7
        */


 Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    
}