#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node* right;

    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};


int countnode(node* root){
    if(root == NULL)
        return 0;

    return countnode(root->left) + countnode(root->right) + 1;
}

int sumnodes(node* root){
    if(root == NULL)
        return 0;

    return sumnodes(root->left) + sumnodes(root->right) + root->data;
}

int  main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<"# of nodes are "<<countnode(root)<<endl;
    cout<<"sum  of nodes are "<<sumnodes(root);



}