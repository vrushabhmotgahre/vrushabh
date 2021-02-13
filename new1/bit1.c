#include <stdio.h> 
int main()
{
 	int num,n,bitstatus;
	printf("enter the num:\n");
	scanf("%d",&num);
	printf("enter the nth bit to check(0-31):\n");
	scanf("%d",&n);
	
	bitstatus = (num >>n) &1;
	printf("the %d bit is set to %d ",n,bitstatus);
	return 0;
}

