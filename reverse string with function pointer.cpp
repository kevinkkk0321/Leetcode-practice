#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *Reverse(char input[])
{
	int i,j;
	char *new_ptr;
	int length = strlen(input);
	char *old_ptr=input;
	new_ptr=(char*)malloc(sizeof(char)*length); /*建立一個新的空間*/ 
	for(i=0,j=length-1;j>=0;i++,j--)
	{
		*(new_ptr+i) = *(old_ptr+j);
	}
		i=length;
		new_ptr[i]='\0';
		return new_ptr;	
}

int main()
{
	char input[80];
	gets(input);
	char *ptr;
	ptr= Reverse(input);
	
	printf("%s\n",ptr);	
	
	return 0;
}

