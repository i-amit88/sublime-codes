#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node *next;

}*head=NULL,*last=NULL;

void insert(int x){
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	if(head==NULL){
		newnode->data=x;
		newnode->next=head;
		head=newnode;
        last=newnode;
	}
	else{
		
		newnode->data=x;
		newnode->next=head;
        
		

        last->next=newnode;
        last=newnode;
		
        // do{
        //     temp=temp->next;
        // }
        // while(temp->next != head);
			
		
		// temp->next=newnode;
	}
}

void display(struct node *head){
	struct node *temp;
	temp=head;
	 do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp != head);   //ye ab non loop ko print krke exit krdega
			
}
void displaynonloop(struct node *head){
	struct node *temp;
	temp=head;
	while (temp != NULL){
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
}


int checkloop(node *f){
    node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while((p and q) and p!=q);

    if(p==q)
        return 1;
    else
        return 0;
}

void checkloopandremove(node *f){
    node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while((p and q) and p!=q);

    if(p==q){
        node *temp;
        temp=f;
        do{
            temp=temp->next;
        }while(temp->next !=head);
        cout<<"loop found at "<<temp->data;
        temp->next=NULL;
    }
    else
        cout<<"no loop found hence no deletion ";
}



int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    display(head);
    cout<<endl;
    cout<<"loop is ";
    cout<<checkloop(head)<<endl;
    checkloopandremove(head);
    cout<<endl;
    displaynonloop(head);   //non loop ke liye alg function likhna pda
    cout<<endl;
    cout<<"again checking loop ";
    cout<<checkloop(head);
    
    return 0;

}