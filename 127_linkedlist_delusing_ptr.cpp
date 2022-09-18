#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

}*head=NULL;



void insert(int x){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(head==NULL){
		
		
		newnode->data=x;
		newnode->next=NULL;
		head=newnode;

	}
	else{
		
		newnode->data=x;
		newnode->next=NULL;
		struct node *temp;
		temp=head;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void delusningptr(struct node *ptr){    //address will be given here
    struct node *temp=NULL;
    temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    free(temp);
}

void display(struct node *temp2){
	struct node *temp;
	temp=temp2;
	while (temp != NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}

int main(){

    insert(2);
	insert(4);
	insert(6);
	insert(8);
	insert(10);
	display(head);
    cout<<endl;
    delusningptr(head);
	display(head);

    return 0;
}