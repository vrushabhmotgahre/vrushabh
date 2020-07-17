//find a pair of index which gives required sum in the array

#include<stdio.h> 

 int main()
 {
 	int i,n,j, arr[100],sum ;
	printf("enter the size of array :\n");
	scanf("%d",&n);
	printf("required sum:\n");
	scanf("%d",&sum);

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
			if(arr[i]+arr[j]==sum)
			{
				printf("sum is found by %d and %d\n",i,j);
			}
		}
	}
}

