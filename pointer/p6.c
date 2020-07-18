#include <stdio.h> 
int main()
{
	char str[100];
	char *ptr=str;
	int vowels=0,constant=0;
	printf("enter any string:\n");
	gets(str);
	while(*(ptr++)!='\0')
	{
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
			vowels++;
		else
			constant++;
	}
	printf("num of vowels: %d\n",vowels);
	printf("num of constant : %d\n",constant);
	return 0;
}

