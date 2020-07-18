#include <stdio.h> 
int main()
{
 	char str[20];
	char *ptr=str;
	printf("enter the string :\n");
	gets(str);
	int length=0;
	while(*(ptr++)!='\0')
		length++;
	printf("%d",length);
	return 0;
}

	
	
