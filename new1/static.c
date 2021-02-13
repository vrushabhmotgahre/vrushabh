#include <stdio.h>

#define MAX 10
static int a = 10;

void func () {
	printf ("%d\n", a++);
}

char *str = "vishnu";

/* My test program */
int main()
{
	
	printf ("%d\n", a++);

	static int a = 10;

	if (1) {
		static int a = 10;
		printf ("a= %d\n", a);
	}

	printf ("a= %d\n", a);

	int i = 5;
	while (i) {
		func ();
		i--;
	}

	int test = MAX;

	return 0;
}

