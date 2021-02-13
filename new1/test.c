#include <stdio.h>
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int i;
	for (i = 0; i < 5; i++)
		if ((char)a[i] == '5')
			printf("%d\n", a[i]);
		else
			printf("FAIL\n");

	printf ("%d\n", (char)a[4]);
	printf ("%d\n", '5');

	int a1 = 10;

	char b = (char)a1;

	printf ("%d\n", 'b');
}
