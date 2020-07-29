#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three sides of triangle\n");
	scanf("%d %d %d \n",&a,&b,&c);
	if (a+b>c)
		printf("triangle is valid\n");

	else 
		printf("triangle is invalid");
}

