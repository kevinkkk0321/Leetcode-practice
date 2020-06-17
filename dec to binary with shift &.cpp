#include <stdio.h>

int main()
{
	
	unsigned int n= 0;
	
	
	while(scanf("%u", &n) != EOF ){
	
	int m=0;
	unsigned int x=n, k=1;
	while(x>0){
		x>>=1;
		m++;    //最大的1在第幾個bit 
	}
	
	x=n;        //重來 ，x回到剛剛輸入的 n
	k <<= m-1;  // 往左shift m-1 次 
	while(k>0){
		if((x&k) > 0) printf("1");
		else printf("0");
		k>>=1;
	} 
		printf("\n");
		} 
	
	} 
