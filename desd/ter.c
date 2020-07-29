#include <stdio.h> 
int main()
{
 	int a,b,c,big;
	printf("enter any three number:    \n");
	scanf("%d%d%d",&a,&b,&c);
	
	big=a>b?(a>c?a:c):(b>c?b:c);
	
	printf("biggest of three no is %d\n",big);
}
