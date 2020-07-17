//program to sepearte odd and even integer in an seperate array


#include <stdio.h> 
int main()
{
 	int i,j=0,k=0, n, arr[100],even[100],odd[100];
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
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	printf("even array:\n");
	for(i=0;i<j;i++)
	{
		printf("%d\t",even[i]);
	}
	printf("odd array:\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",odd[i]);
	}
}

