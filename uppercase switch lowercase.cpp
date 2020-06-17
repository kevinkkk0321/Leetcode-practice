#include <stdio.h>

int main()
{
	char s[15]="Hello World!";
	
	for(int i=0; s[i]; i++)
		if(s[i]>='A'&& s[i]<='Z')
		s[i]=s[i]-'A'+'a';
	for(int j=0; s[j];j++)
	printf("%c",s[j]);
	
} 
