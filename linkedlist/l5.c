#include <stdio.h> 
#include <stdlib.h> 
struct node {
 	int data ;
	struct node* next;
	};

void insert_at_beg(int);
void insert_at_end(int);
void insert_at_pos(int,int);
void display();
int  nodecount();
void deletebypos();
void reverse();

struct node* head=NULL;

int main()
{
	int choice;
	int input,pos;
	while(1){
	printf("\n-------------menu for linkedist-------------\n");
	printf("\n1.insertatbeg\n");
	printf("\n2.insertatend\n");
	printf("\n3.insertatpos\n");
	printf("\n4.display\n");
	printf("\n5.nodecount\n");
	printf("\n6.deletebypos\n");
	printf("\n7.reverse\n");
	printf("\n8.exit\n");
	printf("enter your choice:    \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:		printf("enter input\n");
				scanf("%d",&input);
				insert_at_beg(input);
				break;
		
		case 2:		printf("enter input\n");
				scanf("%d",&input);
				insert_at_end(input);
				break;
		
		case 3:		printf("enter input and position\n");
				scanf("%d %d",&input,&pos);
				insert_at_pos(input,pos);
				break;
		
		case 4: 	printf("--------list content-----\n");
				display(head);
				break;
		
		case 5:		printf("total number of nodes:\n");
				nodecount();
				break;
		
		case 6:		printf("enter position to delete\n");
				deletebypos(pos);
				break;
	
		case 7:		printf("----reverse linkedlist\n");
				reverse();
				break;

		case 8:		printf("exit\n");
				break;
				
		default:	printf("invalid choice\n");	
				break;
	}
	}
}

void insert_at_beg(int item)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=head;
	head=temp;
}

void insert_at_end(int item)

{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	struct node* p;
	p=head;
	temp->data=item;
	if(head==NULL)
	{
		insert_at_beg(item);
	}
	else{
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
}



void insert_at_pos(int item,int pos)
{
	int i=0;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	struct node* p=head;
	temp->data=item;
	if(pos==0)
	{
		insert_at_beg(item);
	}
	else{
		while(i<pos-1)	
		{
			p=p->next;
			i++;
		}
		temp->next=p->next;
		p->next=temp;
	}
}

void display()
{
	struct node* p= head;
	while(p!=NULL)
	{
		printf("%d-->",p->data);
		p=p->next;
	}
	printf("\n");	
}

int nodecount(){
	struct node *temp=head;
	
	int i=0;
	while (temp!=NULL){
		temp=temp->next; i++;
	}
	return i;
	
}

void deletebypos(int pos){
	struct node *temp, *temp1;
	int i=0;
	temp=head;
	int count=nodecount(temp);
	if(pos > count){
		printf("***this pos not available to delete***\n");		      return;
	}
	if(temp==NULL){
		printf("***list is empty***\n");
		return;
	}
	if(pos==0){
		head=temp->next;
		free(temp);
	} else {
		while ( i < pos ){
			temp1=temp;
			temp=temp->next;	
			i++;
			if(temp->next==NULL){
				temp1->next=NULL;
			}
		}
		temp1->next=temp->next;
		free(temp);
	}
}

void reverse( ){
	struct node *a, *b, *c;
	
	a=head;
	b=NULL;
	
	while (a!=NULL){
		c=b;
		b=a;
		a=a->next;
		b->next=c;
	}
	head=b;
}
		
