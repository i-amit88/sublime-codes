#include<bits/stdc++.h>
#include<map>
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


// using map stl library...................

void checkintersection(node *p,node *q){      // p = list1  q = list2 
    map<int,node *> m;
    node *temp;
    temp=q;
    while(temp != NULL){
        m.insert({temp->data,temp->next});
        temp=temp->next;
    }

    // map<int,node*>::iterator it;    //checking the map

    // for ( it = m.begin(); it != m.end(); it++)   //begin and end is same for all forward list and list set vector and dequeue

    // {
    //     cout<<it->first<< " "<<it->second<<endl;
    // }
    // cout<<endl;
    map<int,node *>::iterator itr;
    node *tempp;
    tempp=p;
    while(tempp != NULL){



        for ( itr = m.begin(); itr != m.end(); itr++){

            if(tempp->next==itr->second){
                cout<<"intersection found at "<<tempp->data;
                tempp->next=NULL;
               // cout<<itr->first<< " "<<itr->second<<endl;
            }
            tempp=tempp->next;
        }
        
    }
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert2(4);
    insert2(5);
    insert2(6);
    cout<<"displaying list 1 "<<endl;
    display(head);
    cout<<endl;
    cout<<"displaying list 2 ";
    cout<<endl;
    display(head2);
    cout<<endl;



    node *newnode=(node*)malloc(sizeof(node));
    node* temp;
    node* temp2;
    temp=head;
    temp2=head2;
    newnode->data=7;
    newnode->next=NULL;
    while(temp2->next != NULL)
        temp2=temp2->next;
    
    temp2->next=newnode;
    while(temp->data != 2)
        temp=temp->next;
    
    newnode->next=temp;


    cout<<"displaying list 1 "<<endl;
    display(head);
    cout<<endl;
    cout<<"displaying list 2 ";
    cout<<endl;
    display(head2);
    cout<<endl;

    cout<<"now checking for the intersection "<<endl;

    checkintersection(head2,head);
}