#include <stdio.h>

int main()
{
	
	unsigned int n= 0;
	
	
	while(scanf("%u", &n) != EOF ){
	
	int m=0;
	unsigned int x=n, k=1;
	while(x>0){
		x>>=1;
		m++;    //�̤j��1�b�ĴX��bit 
	}
	
	x=n;        //���� �Ax�^�����J�� n
	k <<= m-1;  // ����shift m-1 �� 
	while(k>0){
		if((x&k) > 0) printf("1");
		else printf("0");
		k>>=1;
	} 
		printf("\n");
		} 
	
	} 
