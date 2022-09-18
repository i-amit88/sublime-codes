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

void display(struct node *head){
	struct node *temp;
	temp=head;
	while (temp != NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}


void deletefromend(struct node *head,int a[],int size,int n){
    int element=a[size-n];
    struct node *p=NULL,*q=NULL;
    p=head;
    while(p->data != element){
        q=p;
        p=p->next;
        
    }
    q->next=p->next;
    free(p);


}

int main(){
    int size=0;
    cout<<"enter size of array";
    cin>>size;
    int n;
    cout<<"enter elemnet you want to delete";
    cin>>n;
    
    int arr[size];
    for(int  i = 0 ;  i < size ; i++)
        cin>>arr[i];

    for(int  i = 0 ; i < 5 ; i++){
        
        insert(arr[i]);
    }
    display(head);
    cout<<endl;
    deletefromend(head,arr,size,n);

    display(head);
}

//doneeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee