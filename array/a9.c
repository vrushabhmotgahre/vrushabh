#include <stdio.h> 
int main()
{
 	int n,i,arr[100],j,temp;
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
		for(j=0;j<i;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("array elements in descending order\n");

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}

