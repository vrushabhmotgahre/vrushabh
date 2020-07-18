#include <stdio.h>
#include <stdlib.h>
int main()
{
 	int i,n,*ptr;
	printf("enter the number of elements :\n");
	scanf("%d",&n);
		
	printf("\nenter the number of elements:\n");
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not allocated:\n");
		exit(0);
	}
	else
	{
		printf("memory sucessfully allocated using malloc:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	
	printf("\nthe elements of array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);
	}
	}
	for(i=0;i<n;i++)
	{
		if(*ptr<*(ptr+i))
		*ptr=*(ptr+i);
	}
	printf("\nthe largest element is %d\n:",*ptr);


	return 0;
}

	
