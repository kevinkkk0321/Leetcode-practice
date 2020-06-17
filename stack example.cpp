#include <stdio.h>
#include <stdlib.h>

int push(void);      /*����*/ 
int pop(void);       /*�����*/ 
int printout(void);
int i=1, number, choose;
int *empty, *ptr, *full;
int stack[10];

int main()
{
	ptr=stack;
	empty= &stack[0];
	full= &stack[9];
	
	
	do
	{
	printf("---stack operation---\n");
	printf("1. push operation\n");
	printf("2. pop operation\n");
	printf("3. print operation\n");
	printf("\n");
		
	int num;
	scanf("%d",&num);
	
	switch(num)
	{
		case 1: push(); break;
		case 2: pop();  break;
		case 3: printout(); break;
		default: printf("error");
	}
	}while(1);
	system("pause");
	return 0;
}
	
int push(void)
{
	ptr++;
	if (ptr==full)
	{
		printf("���|�w��!!!");
		ptr--;
	}
	else
	{
		printf("�п�J��%d�����: ",i++);  /*i=��ƲĴX��*/ 
		scanf("%d\n",ptr);
		printf("\n\n");
	}
} 

int pop(void)
{
	if(ptr != empty)
	{
	printf("pop for stack: %d\n", *ptr);
	ptr--;
	i--;
	}
	else
	{
		printf("already empty!!!\n");
		i=1;
	}
}


int printout()
{
	int *temp_ptr;
	temp_ptr=ptr;
	printf("�ثe���|���: ");
	do
	{
		if(temp_ptr != empty)
		{
			printf("%d",*temp_ptr);
			temp_ptr--;
		}
		
		else break;
	}
	while(1);
	
}
