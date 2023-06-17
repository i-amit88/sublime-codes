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

void sumcal(node* root){
    if(root==NULL)
        return;
    sumcal(root->left);     //ye ek node pehle pe ruk jayega
    sumcal(root->right);    //kyuki dino baar call hoke vapas aaya as null found
    if(root->left != NULL)
        root->data +=root->left->data;
    if(root->right != NULL)
        root->data += root->right->data;
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

    sumcal(root);
    inordertree(root);





 }