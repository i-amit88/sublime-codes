#include<bits/stdc++.h>
using namespace std;


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

static int n=1;
static int n2=1;     
int sum1=0;          
int sum2=0;
int multiply1(struct node *ptr){     //it will return sum value
    
    
    if(ptr == NULL)
        return 0;
    else{
        multiply1(ptr->next);
        sum1=sum1+ptr->data*n;
        n=n*10;
    }
    return sum1;

}
int multiply2(struct node *ptr){     //it will return sum value
    
    
    if(ptr == NULL)
        return 0;
    else{
        multiply2(ptr->next);
        sum2=sum2+ptr->data*n2;
        n2=n2*10;
    }
    return sum2;

}




int main(){
    insert(9);
    insert(4);
    insert(6);
    insert2(8);
    insert2(4);
    display(head);
    cout<<endl;
    display(head2);
    cout<<endl;
    int a=multiply1(head);
    int b=multiply2(head2);
    cout<<a<<" "<<b<<endl;
    int ans=0;
    ans=a*b;
    cout<<ans;
    

    return 0;

}

// doneeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee