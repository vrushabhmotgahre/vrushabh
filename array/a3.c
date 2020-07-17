//print array in ascending order

#include <stdio.h> 
int main()
{
 	int n,i,arr[20],j,temp;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
	 	scanf("%d",&arr[i]);
		printf("%d\t",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
	}

	printf("\nascending order....\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}

