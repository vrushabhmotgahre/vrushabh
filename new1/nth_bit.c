#include <stdio.h> 
int main()
{
 	int num,n,bitstatus;
	printf("enter any num:\n");
	scanf("%d",&num);
	printf("enter bit position:\n");
	scanf("%d",&n);
	
	bitstatus =(num >> n)&1;
	
	printf("the %d bit is set to %d",n,bitstatus);
	
	return 0;
}

