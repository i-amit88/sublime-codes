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

void rightview(node* root){
    if(root == NULL)
        return;

    queue<node*>q;
    q.push(root);     //first node pushed
    while(!q.empty()){
        int n=q.size();       //to traverse to last node
        for(int i=0; i<n ; i++){

            node* curr=q.front();
            q.pop();

            if(i==n-1)                     //if last element then print
                cout<<curr->data<<" ";

            if(curr->left){                   //for next level pushed
                q.push(curr->left);
            }

            if(curr->right){                 //for next level pushed
                q.push(curr->right);
            }
        }
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

    rightview(root);
    





 }