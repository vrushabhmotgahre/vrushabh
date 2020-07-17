#include <stdio.h>
int main()
{
 	int i,n,sum=0;
	float  avg=0;

	printf("enter the number upto which the natural number is required:\n");
	scanf("%d",&n);
	//print n natural numbers:
	for(i=1;i<=n;i++)
	{
 		printf("%d ",i);

		sum =sum +i;

	}
	printf("\n");

	//print odd natural numbers upto n :
	 printf(" odd natural numbers:\n");
        for(i=0;i<n;i++)
        {
                if(i%2!=0)
                {
                        printf("%d  ",i);
                }
	
        }
	
	//print cube of n natural numbers:
	printf("\ncube of numbers:\n");

	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i*i);
	}
	//print sum and avg:

		printf("\nsum =%d\n",sum);
		avg =(float)sum /n;
		printf("\navgearge=%f\n",avg);

	//print multiplication table of given number:
	int a;
	printf("enter the number for multiplication table:\n");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		printf("%d  ",a*i);
	}




	
}

