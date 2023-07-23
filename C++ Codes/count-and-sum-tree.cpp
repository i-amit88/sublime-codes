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

    };


};


int count(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = count(root->left) ;
    int right = count(root->right) ;

    return left + right + 1;
}

int sumNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = sumNodes(root->left) ;
    int right = sumNodes(root->right) ;

    return left + right + root->data;
}
// int count(Node* root){
//     if(root == NULL){
//         return 0;
//     }
//     return count(root->left) + count(root->right) + 1;    
// }


int32_t main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<"Count of nodes is :"<<count(root)<<endl;
    cout<<"Sum of nodes is : "<<sumNodes(root);

}