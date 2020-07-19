#include <stdio.h>
char strcopy(char str1[],char str2[]); 
int main()
{
 	char str1[50];
	char str2[50];

	int i=0;
	printf("enter any string:\n");
	gets(str1);
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	printf(" second string=%s\n",str2);
	strcopy(str1,str2);
	printf("copied string =%s\n",str2);


}

char strcopy(char str1[],char str2[])
{
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	return str2;
}
