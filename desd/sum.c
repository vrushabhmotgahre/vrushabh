#include <stdio.h>
int main()
{
 	int i,n,sum=0;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum =sum +i;
	printf("\nsum of n numbers = %d\n",sum);
}

