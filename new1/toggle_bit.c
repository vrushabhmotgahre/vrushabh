#include <stdio.h> 
int main()
{
 	int num,n,newnum;
	printf("enter any num:\n");
	scanf("%d",&num);
	printf("enter the bit position to toggle:\n");
	scanf("%d",&n);
	
	newnum=num ^ (1<< n);
	printf("bit toggled successfully\n");
	printf("number before toggling %d\n",num);
	printf("number after toggling %d \n",newnum);
	return 0;
	
}

