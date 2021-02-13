#include <stdio.h>
 
static inline int add(a,b)
{
	int i=0;
	i=a+b;
	printf("%d\n",i);

	
}

int main()
{
 	int a=3,b=4;
	int ret;
	ret = add(a,b);
//	printf("%d\n",ret);

}
 
