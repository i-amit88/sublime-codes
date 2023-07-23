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
int ans = 0;
int DiameterCalc(Node* root){
    if(root == NULL){
        return 0;
    }
    int lHeigth = heightCalc(root->left);
    int rHeigth = heightCalc(root->right);

    //O(n^2)
    // int currDiameter = lHeigth + rHeigth + 1;

    // int lDiameter = DiameterCalc(root->left);
    // int rDiameter = DiameterCalc(root->right);

    // return max(currDiameter,max(lDiameter,rDiameter)); 

    // O(n)
    ans= max(ans,1+lHeigth+rHeigth);
    return 1 + max(lHeigth,rHeigth);
}

int32_t main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    // cout<< "Height of the tree is : "<<heightCalc(root)<<endl;
    // cout<<"Diameter of the tree is : "<<DiameterCalc(root);
    cout<< "Height of the tree is : "<<DiameterCalc(root)<<endl;
    cout<<"Diameter of the tree is : "<<ans;
    return 0;
}