//print table of a given number

#include <stdio.h> 
int main()
{
 	int i=1,n,limit=10,multiple;
	printf("enter the number :\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		multiple=n*i;
		printf("%d\n",multiple);
	}
}

 		
