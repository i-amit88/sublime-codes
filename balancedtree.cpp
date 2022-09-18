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

int heighttree(node* root){
    if(root == NULL)
        return 0;

    int lh =heighttree(root->left);
    int rh=heighttree(root->right);

    return max(lh,rh)+1;


}

bool isbalanced(node* root){
    if(root ==NULL)
        return true;
    
    if(isbalanced(root->left) ==false)
        return false;
    if(isbalanced(root->right) == false)
        return false;

    int lh=heighttree(root->left);
    int rh=heighttree(root->right);
    if(abs(lh-rh)<=1){
        return true;

    }else{
        return false;
    }
}

void inordertree(node *root){

        if(root==NULL)
            return;
        inordertree(root->left);
        cout<<root->data<< " ";
        inordertree(root->right);
}
int  main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    
    

    cout<<isbalanced(root);



}