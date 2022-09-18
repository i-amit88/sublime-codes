/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int add(struct ListNode * ptr,int &sum, int &n){
    if(ptr-> next == NULL) return 0;
    else{
        add(l1,sum);
        sum = sum + n*ptr->data;
        n = n * 10;
    }
    return add;
}
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


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int sum1 = 0, sum2 = 0; 
    int n1 = 1 , n2 = 1;
    int n3=1;
    struct ListNode* head = NULL;
    int summation = add(list1,sum1,n1) + add(l2,sum2,n2);
    while(sum != 0){
        instert(summation%10);
        summation = summation / 10;
        
    }
    ret
    
}