//copy the elements of one array to another array//

#include <stdio.h> 
int main()
{
 	int i,j,n,arr1[100],arr2[100];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of arr1 :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		printf("%d\t",arr1[i]);
	}
	for(i=0,j=0;i<n;i++,j++)
	{
		arr2[j]=arr1[i];
	}
	printf("\nelements of arr2\n");

	for(j=0;j<n;j++)
	{
		printf("%d\t",arr2[j]);
	}
}

