//check whether the given num is perfect number or not

#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the no:\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum +i;
		}
	}
	if(sum==n)
	{
		printf("number is perfect number\n");
	}
	else
	{
		printf("number is not perfect number\n");
	}
}

