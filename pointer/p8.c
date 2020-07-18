#include <stdio.h> 
int main()
{
 	int i,n,arr[100],*ptr;
	ptr=&arr;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		printf("%d\t",arr[i]);
		ptr++;
	}
	ptr=&arr[n-1];

	printf("array elemenets in reverse order:\n");
	for(i=n;i>0;i--)
	{
		printf("%d\t",*ptr);

		ptr--;
	}
}

