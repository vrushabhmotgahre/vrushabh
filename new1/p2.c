#include <stdio.h>
int add(x,y); 
int main()
{	int	sum=0;
	sum=add(10,20);
	printf("%d\n",sum);
 	printf("%p\n",main);
	printf("%p\n",add);	
	getchar();
	return 0;
}

int add(x,y)

{
	return x+y;
}
	
	

