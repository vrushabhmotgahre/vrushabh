#include <stdio.h> 
int main()
{
 	int i, arr[100],n,*ptr,sum=0;
	ptr=&arr;

	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d\t",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum =sum +*(ptr+i);
	}
	printf("\n%d \n",sum);
}

	
