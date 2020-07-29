#include <stdio.h>
int main()
{
	 int arr1[10];
	int i,sum =0;
 	for(i=0;i<10;i++)
{
 	printf("enter array elements arr1[%d] :",i);
	scanf("%d",&arr1[i]);
	sum +=arr1[i];
}
	printf("sum =%d ",sum);
}

