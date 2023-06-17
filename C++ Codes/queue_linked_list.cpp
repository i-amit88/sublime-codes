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
	int data;
	struct node *next;

};

struct node *front=NULL,*rear=NULL;

void enqueue(int x){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	if(front==0 and rear==0)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}

void dequeue(){
	struct node *temp;
	temp=front;
	if(front==0 and rear==0)
	{
		cout<<"empty queue";
	}
	else
	{
		// cout<<front->data<<endl;
		front=front->next;	
		free(temp);
	}
}

void dispaly(){
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

int main(){

	file_io();
	enqueue(5);
	enqueue(8);
	enqueue(7);
	dispaly();

	return 0;
}