#include<bits/stdc++.h>
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

int sumAtK(node* newnode,int k){

    if(newnode == NULL){
        return -1;
    }
    int sum=0,level=0;
    
    queue<node*>q;
    q.push(newnode);
    q.push(NULL);

    while (!q.empty())
    {
        node* root = q.front();
        q.pop();

        if(root != NULL){
            if(level == k) sum+=root->data;
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);

        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }



    }
    return sum;
    
}
void levelorder(node* root){

        queue<node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){

            node* newnode=q.front();
            q.pop();
            if(newnode !=NULL){

                cout<<newnode->data<<" ";
                if(newnode->left){
                    q.push(newnode->left);
                }
                if(newnode->right){
                    q.push(newnode->right);
                }

            }else if(!q.empty()){
                q.push(NULL);
            }
        }
}

int  main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    levelorder(root);
    cout<<endl;
    cout<<"SUM is : "<<sumAtK(root,1);


}