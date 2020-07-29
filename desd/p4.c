#include <stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	a =a+b;
	b =a-b;
	a =a-b;
	printf("swap no is a=%d & b=%d",a,b);
}
