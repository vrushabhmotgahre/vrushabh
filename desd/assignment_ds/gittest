#include <stdio.h> 
#include <stdlib.h> 
int a[20],b[20],c[40];
int n,val,i,j,key,pos,temp;

void create();
void display();
void insert();
void del();
void search();
void sort();
int main()
{
	int choice;
	do{
		printf("\n-------menu-----------\n");
		printf("1.create\n");
		printf("2.dispaly\n");
		printf("3.insert\n");
		printf("4.delete\n");
		printf("5.search\n");
		printf("6.sort\n");
		printf("7.exit\n");
		printf("----------------------------");
		printf("\nenterv yout choice:\t");
		scanf("%d",&choice);
		switch(choice)
		{
			
			case 1:  	create();
					break;
			
			case 2:		display();
					break;
				
			case 3:		insert();
					break;
			
			case 4:		del();
					break;
			
			case 5:		search();
					break;
			
			case 6:		sort();
					break;
			
			case 7:		exit(0);
					break;
			
			default :
					printf("\ninvalid choice:\n");
					break;
		}
	}while(choice!=8);
return 0;
}	

void create()
{
	printf("enter the size of the array elements :\n");
	scanf("%d",&n);
	printf("\nenter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void display()
{
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
	
void insert()
{
	printf("enter the position of the new element:\t");
	scanf("%d",&pos);
	printf("enter the new elements :\n");
	scanf("%d",&val);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	n=n+1;
}

void del()
{
	printf("enter the position of the element to be deleted:\n");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	
	printf("the deleted element is %d",val);
}


void search()
{
	printf("\nenter the element to be searched:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("the element is found at position %d\n",i);
			break;
		}
	}
	if(i==n)
	{
		printf("\nthe search is unsuccesfull\n");
	}
}

void sort()
{
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	printf("\nafter sorting the array elements are:\n");
	display();
}


