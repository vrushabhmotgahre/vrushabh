#include <stdio.h> 
int main()
{ 
	int i, j, n, arr[100];
	int count=0;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d\t",arr[i]);
	}
	for(i=0;i<n;i++)
	{
	//	for(j=0;j<n;j++)
	
			if (arr[i]==arr[i+1])
			count++;
	
	}
	printf("%d",count);
}
