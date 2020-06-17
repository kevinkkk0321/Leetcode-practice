#include <stdio.h>
#include <string.h>


void reverse(char *str)
{
	char c;
	int i,j;
	int length = strlen(str);
	for(i=0,j=length-1;j>i;i++,j--)
	{
		c = str[i];
		str[i]=str[j];
		str[j]=c;
	}
}

int main()
{
	char string[80];
	char *str=string;
	gets(string);
	reverse(str);
	puts(str);
	
	return 0;
}
