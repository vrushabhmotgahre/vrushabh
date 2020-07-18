#include <stdio.h> 
int main()
{
 	int a,b,*p,*q,sum ;
	printf("enter the numbers:\n");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	sum =*p +*q;
	printf("\nsum =%d",sum);
	return 0;
}

