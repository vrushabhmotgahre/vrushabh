#include <stdio.h>
int sum(int n);
int mul(int n);




int main()
{
 	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("sum of digits of %d is %d\n",num,sum(num));
	printf("product of digit of %d id %d\n",num,mul(num));

}
//function for sum of digits of numbers:	
int sum(int n)
{
	int i,sum=0,rem;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return (sum);
}
//////////////////////////////////////////

//function for product of digits of numbers:

int mul(int n)
{
	int mul=1,rem;
	while(n>0)
	{
		rem=n%10;
		mul=mul*rem;
		n=n/10;
	}
	return (mul);

}
/////////////////////////////////////////

