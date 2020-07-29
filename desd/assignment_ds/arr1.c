#include <stdio.h>
#include <stdlib.h> 
int main()
{
 	int arr[50],*ptr;
	ptr=&arr;
	int n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	*ptr=(int*)malloc(n*(sizeof(int));
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d\t",*(ptr+i));
	}
}


	
