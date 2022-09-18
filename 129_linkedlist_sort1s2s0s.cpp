#include<bits/stdc++.h>
using namespace std;

int n1=0,n2=0,n3=0;
struct node{
    int data;
    struct node *next;

}*head=NULL,*head2=NULL;

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
void insert2(int x){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(head2==NULL){
		newnode->data=x;
		newnode->next=NULL;
		head2=newnode;
	}
	else{
		newnode->data=x;
		newnode->next=NULL;
		struct node *temp;
		temp=head2;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void display(struct node *head){
	struct node *temp;
	temp=head;
	while (temp != NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}

void insert012(int n1,int n2,int n3){
    while(n1--){
        insert2(0);
    }
    while(n2--){
        insert2(1);
    }
    while(n3--){
        insert2(2);
    }
}

void sort123(struct node *head){
    
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp->next !=NULL){
        if(temp->data==0)
            n1++;
        else if(temp->data==1)
            n2++;
        else
            n3++;
    }
    insert012(n1,n2,n3);
}

int main(){

    insert(0);
    insert(0);
    insert(2);
    insert(1);
    insert(1);
    insert(1);
    insert(2);
    insert(0);
    display(head);
    sort123(head);
    display(head2);
    return 0;
}