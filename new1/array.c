#include <stdio.h>

int main()

{
	int a[] = {1,2,3,4,5};

	int *p = a;

	p++;

	printf("%d\n",*p);

	p++;

	
	printf("%d\n",*p);

	a++;

}
