#include <stdio.h>
int add();
int sub();
int product();
int div();

int main()
{
	int n1,n2, choice,res;
	printf("enter any no n1 n2\n");
	scanf("%d%d",&n1,&n2);
	
	while(1){
		printf("calculater\n");
		printf("menu\n");
		printf("add\n");
		printf("sub\n");
		printf("product\n");
		printf("division\n");
		printf("enter your choice:\t");
		scanf("%d",&choice);
		
	switch(choice)
	{
		case 1:
				add();
				return res;
				break;

		case 2 :
				sub();
				break;

		case 3:
				product();
				break;

		case 4 :
				div();
 				break;
		default :
				printf("wrong choice\n");
				break;
	}
}return 0;
}
 
int add( int n1,int n2 )
{
int res;

   res = n1 +n2;
   return res;
}
