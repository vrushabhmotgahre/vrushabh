#include <stdio.h>
#include<string.h>

int main()
{
	char str[30];
	int i=0;
	char ch;
	printf("enter any string:  ");
	scanf("%s",str);
	printf("enter any character:  \n ");
        while(getchar()!='\n');
	scanf("%c",&ch);
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		printf("%d",i);
		else
			i++;
	}
	printf("character not found");
return 0;

}

