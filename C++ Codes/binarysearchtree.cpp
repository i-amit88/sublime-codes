#include<bits/stdc++.h>
using namespace std;

void file_io(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
}

struct node{
	struct node *lchild;
	int data;
	struct node *rchild;
}*root=NULL;

void insert(int key){
	struct node*t=root;
	struct node *r,*p;
	if(root==NULL){
		p=(struct node*)malloc(sizeof(struct node));
		p->data=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;
	}
	while(t != NULL){
		r=t;
		if(key < t->data)
			t=t->lchild;
		else if(key>t->data)
			t=t->rchild;
		else
			return;
	}
	p=(struct node*)malloc(sizeof(struct node));
	p->data=key;
	p->lchild=p->rchild=NULL;

	if(key<r->data) 
		r->lchild=p;
	else
		r->rchild=p;
}

void inorder(struct node*p){
	if(p){
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
}

struct node* search(int key){
	struct node *t=root;

	while(t != NULL){
		if(key==t->data)
			return t;
		else if(key < t->data)
			t=t->lchild;
		else
			t=t->rchild;

	}
	return NULL;
}


//...............deleting in binary search tree

struct node *delete(struct node* p,int key){


	struct node *q;
	if(p==NULL)
		return NULL;
	if(p->lchild==NULL and p->rchild==NULL)
	{
		if(p==root)
			root=NULL;
		free(p);
		return NULL;
	}
	if(key<p->data)
		p->lchild=delete(p->lchild,key);
	else if(key > p->data)
		p->rchild=delete(p->rchild,key);
	else
	{
		if(height(p->lchild) > height(p->rchild) ){
			q=inpre(p->lchild);
			p->data=q->data;
			p->lchild=delete(p->lchild,q->data);
		}
		else
		{
			q=insucc(p->rchild);
			p->data=q->data;
			p->rchild=delete(p->rchild,q->data);
		}
	}
}

int main(){

	struct node *temp;
	file_io();
	insert(10);
	insert(5);
	insert(20);
	insert(8);
	insert(30);


	inorder(root);
	cout<<endl;

	temp=search(3);
	if(temp != NULL)
		cout<<"element found  "<<temp->data;
	else
		cout<<"element not found";



	return 0;
}