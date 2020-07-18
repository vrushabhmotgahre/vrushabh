#include <stdio.h> 
int main()
{
 	int i, n, arr[100],*ptr;
	ptr=&arr[100];

	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d\t",arr[i]);
	}
	printf("\nprint array elements using pointer:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(arr+i));
	}
}
	
