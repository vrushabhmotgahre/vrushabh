#include <stdio.h>
#define INT_SIZE sizeof(int)*8 
int main()
{
 	int num,zeros,ones,i;
	printf("enter any number :\n");
	scanf("%d",&num);
	
	zeros=0;
	ones=0;
	
	for(i=0;i<INT_SIZE;i++)
	{
	 	if(num&1)
			ones++;
		else
			zeros++;
	
		num>>=1;
	}
	printf("the number of zeros is %d\n the number of ones is %d ",zeros,ones);
}
