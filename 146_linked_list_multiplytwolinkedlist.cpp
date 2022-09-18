#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node *next;

}*head=NULL,*head2=NULL,*head3=NULL;

void insert1(int x){     //create list 1
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
void insertsum(int x){     //creates sumed  linked list
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(head3==NULL){
		newnode->data=x;
		newnode->next=NULL;
		head3=newnode;
	}
	else{
		
		newnode->data=x;
		newnode->next=head3;
        head3=newnode;
	}
}


void display(struct node *head){     //displays the linked list
	struct node *temp;
	temp=head;
	while (temp != NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}

void insert2(int x){     //create list2 
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
static int n=1;
static int n2=1;     
int sum1=0;          
int sum2=0;
void multiply1(struct node *ptr){     //it will return sum value
    
    
    if(ptr == NULL)
        return;
    else{
        multiply1(ptr->next);
        sum1=sum1+ptr->data*n;
        n=n*10;
    }
    

}
void multiply2(struct node *ptr){     //it will return sum value
    
    
    if(ptr == NULL)
        return;
    else{
        multiply2(ptr->next);
        sum2=sum2+ptr->data*n2;
        n2=n2*10;
    }
    

}

void sumlinkedlist(){          //adds the two number
    int n=sum1+sum2;
    
    while(n !=0){
        int x=n%10;
        n=n/10;
        insertsum(x);                      //insert in sumed linkedlist
    }
}



int main(){
    //creating list 1 
    insert1(5);
    insert1(6);
    insert1(3);
    insert2(8);
    insert2(4);
    insert2(2);

    multiply1(head); //getting number 1
    display(head);
    cout<<endl;
    display(head2);
    cout<<endl;
    
    cout<<endl;
    

    multiply2(head2);  //getting number 2
    cout<<sum1<<" "<<sum2;
    cout<<endl;

    sumlinkedlist();        //adding the number
    //displying sum linked list
    display(head3);

}