#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* right;
    struct node* left;

    node(int x){
        data=x;
        right=NULL;
        left=NULL;
    }

};



void inordertree(node *root){

        if(root==NULL)
            return;
        inordertree(root->left);
        cout<<root->data<< " ";
        inordertree(root->right);
}

int searchpos(int inorder[], int start , int end , int curr){
    for(int i = start; i <= end ; i++){
        if(inorder[i]==curr)
            return i;
    }
    return -1;
}

node* buildTree(int preorder[],int inorder[],int start, int end){

        static int idx=0;
        if(start>end)
            return NULL;

        int curr = preorder[idx];
        idx++;
        node *newnode= new node(curr);
        if(start==end)
            return newnode;
        
        int pos=searchpos(inorder,start,end,curr);
        newnode->left=buildTree(preorder,inorder,start,pos-1);
        newnode->right=buildTree(preorder,inorder,pos+1,end);

    
    return newnode;


}

int main(){
    
   
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    node *root=buildTree(preorder,inorder,0,4);
    inordertree(root);
    
    
}