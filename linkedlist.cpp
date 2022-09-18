#include<iostream>
using namespace std;
#include<unordered_set>

struct Node{
    int data;
    struct Node *next;

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

void display(struct node *temp2){
	struct node *temp;
	temp=temp2;
	while (temp != NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}

int main(){

    
    return 0;
}