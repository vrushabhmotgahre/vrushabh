#include <stdio.h>
#include<stdlib.h>
 
#define SIZE 5
int stack[SIZE],top=-1;

void push();
void pop();
void display();

int main()
{
	int choice;
	do{
		printf("\n\n-------STACK OPERATIONS------\n");
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.display\n");
		printf("4.exit\n");
		printf("--------------------------");
		printf("\nenter your choice:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					push();
					break;
			
			case 2:
					pop();
					break;
			
			case 3:
					display();
					break;
			
			case 4:
					exit(0);
					break;
			default:
					printf("\ninvalid choice:\n");
					break;
		}
	}while(choice!=5);
	return 0;
}
	
//inserting elements into the stack
void push()
{
	int item;
	if(top==SIZE-1)
	{
		printf("\nstack overflow:");
	}
	else
	{
		printf("enter the element to be inserted:\t");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}
	
//deleting an elements from stack
void pop()
{	
	int item ;
	if(top==-1)
	{
		printf("\nstack is empty:");
	}
	else
	{
		item =stack[top];
		top=top-1;
		printf("\nthe poped element :%d\t",item);
	}
}
	
//display the stack elements
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nstack is empty:\n");
	}
	else
	{
	printf("\nthe stack elements are:\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
	}
	
}

