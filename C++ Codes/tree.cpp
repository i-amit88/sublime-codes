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

struct Node{                   //for tree linked list
	int data;
	struct Node *lchild;
	struct Node *rchild;
};

struct node{                  //for queue
	struct Node* data;        //capital N wala isiliye kyuki data hi tree linklist ka address h
	struct node *next;
};




struct node *temp,*head=NULL,*rear=NULL,*front=NULL;

void enqueue(struct Node* x){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(front==0 and rear==0){
		front=rear=newnode;

	}else{
		rear->next=newnode;
		rear=newnode;
	}
}

struct Node* dequeue(){ // N isliye kyuki return to tree ka address krra h


	return (struct Node*)front;      //returns the add of tree add but was in n format so typecasted 
	// temp=front;
	// if(front==0 and rear==0){
	// 	cout<<"empty queue";
	// }
	// else{
	// 	add=front;
	// 	front=front->next;
	// 	free(temp);
	// }
}

int isempty(){
	if(front==0 and rear==0)
			return 0;
	return 1;
}

void display(){
	struct node *temp;
	if(front==0 and rear==0)
	{
		cout<<"empty queue";
	}
	else
	{
		temp=front;
		while(temp != 0)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
}

void create(){
	struct Node *p,*t,*root;
	int x;
	cout<<"enter the number";
	cin>>x;
	root=(struct Node*)malloc(sizeof(struct Node));
	root->data=x;
	root->lchild=root->rchild=0;
	enqueue(root);
	while(isempty()){
		p=dequeue();
		cout<<"enter left child of"<<x<<endl;
		cin>>x;
		if(x != -1){
			t=(struct Node*)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild=t->rchild=0;
			p->lchild=t;
			enqueue(t);
		}
		cout<<"enter right child of"<<x<<endl;
		cin>>x;
		if(x != -1){
			t=(struct Node*)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild=t->rchild=0;
			p->rchild=t;
			enqueue(t);
		}

	}


}

int main(){

	file_io();
	// create();
	
	cout<<"hello kon h tu";
	return 0;
}


