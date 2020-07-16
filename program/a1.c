#include <stdio.h> 
int main()
{
	int n,rem,temp,sum=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
 		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(temp==sum)
 		printf("number is armstrong");
	else
		printf("number is not armstrong number");
}

