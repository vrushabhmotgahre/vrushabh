#include <stdio.h>
#include <string.h>
int main()
{
	char str[20];
	int len;
	printf("enter any string :  ");
	scanf("%s",str);
	len =strlen(str)-1;
	while(len>=0)
	{
		printf("%c",str[len]);
		len --;
	}
	printf("\n");
}

