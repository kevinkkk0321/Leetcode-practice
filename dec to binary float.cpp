#include <stdio.h>

int main()
{
	float x= 0.1;
	unsigned char* a= (unsigned char*) &x;
	
	printf("%02X, %02X, %02X, %02X\n", a[3], a[2], a[1], a[0]);

	getchar();
} 
