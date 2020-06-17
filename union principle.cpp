#include <stdio.h>
#include <stdlib.h>

union unknown
{
	char c;
	int i;
	float f;
};

int main()
{
	union unknown var2;
	union unknown var1={3.1415926};
	printf("var1.i=%d\n",var1.i);
	printf("var1.f=%f\n",var1.f);
	var1.f=3.3;
	printf("var1.f=%f\n",var1.f);
}



