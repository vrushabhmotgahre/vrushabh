#include <stdio.h> 
int main()
{
	int a =5;
	double d = 3.23;
	void *vp;
	vp=&a;
	printf("\n a = %d",*((int*)vp));
	vp=&d;
	printf("\n d = %f",*((double*)vp));
	return 0;
}

