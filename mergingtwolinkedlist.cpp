#include<bits/stdc++.h>

using namespace std;


// void file_io(){

// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r", stdin);
// 	freopen("output.txt","w", stdout);
// 	#endif
// }

struct node{
	int data;
	struct node *next;
}*head=NULL,*head2=NULL,*third=NULL;


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

void display(struct node *temp2){
	struct node *temp;
	temp=temp2;
	while (temp != NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}


void reverse(){								//reversing the linked list
	struct node *p,*q,*r;
	p=head;
	q=NULL;
	r=NULL;
	while(p != NULL){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
}

int loopcheck(struct node *f){     //will take head address
	struct node *p,*q;
	p=q=f;
	do{
		p=p->next;
		q=q->next;
		q=q?q->next:q;
	}while(p and q and p!= NULL);

	if(p==q)
		return 1;
	else
		return 0;
}

void merge(struct node *first,struct node *second){
    struct node *last=NULL;     //here first searching the minimum head value to start
    if(first->data<second->data){
        third=last=first;
        last=last->next;
    }else{
        third=last=second;
        last=last->next;
    }

    while(first !=NULL and second !=NULL){   //checking the lowest and linking
        if(first->data<second->data){
            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;
        }else{
            last->next=second;
            last=second;
            second=second->next;
            last->next=NULL;
        }
        if(first != NULL)
            last->next=first;
        else 
            last->next=second;
    }
}


int main(){
	
	// file_io();
	insert(2);
	insert(4);
	insert(6);
	insert(8);
	insert(10);
	display(head);
    cout<<endl;
	// cout<<endl;
	// reverse();
	// display();
	// cout<<endl;
	// cout<<loopcheck(head);
    insert2(3);
    insert2(5);
    insert2(7);
    insert2(9);
    insert2(11);
    display(head2);

    merge(head,head2);
    display(third);
    
	
	return 0;

}