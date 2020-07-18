#include <stdio.h>
int sum(int *,int *); 
int main()
{
 	int a,b,c;
	printf("enter the numbers:\n)");
	scanf("%d %d",&a,&b);
	c=sum(&a,&b);
	printf("%d",c);

}
int sum (int *a,int *b)
{
	long sum;
	sum =*a+*b;

	return sum;
}

