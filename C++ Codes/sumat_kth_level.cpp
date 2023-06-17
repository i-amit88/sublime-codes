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

int sumatk(node* root,int k){
        
        if(root == NULL){
            return -1;
        }
        int level=0;
        int sum=0;

        queue<node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){

            node* newnode=q.front();
            q.pop();
            if(newnode !=NULL){
                if(level == k){
                    sum=sum+ newnode->data;
                }
                
                if(newnode->left){
                    q.push(newnode->left);
                }
                if(newnode->right){
                    q.push(newnode->right);
                }

            }else if(!q.empty()){

                q.push(NULL);
                level++;

            }
        }
    return sum;

}

int  main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<sumatk(root,2);


}