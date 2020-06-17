#include <stdio.h>

int main(){
	int temp;
	unsigned int  a;
	unsigned int  i[20], j, k;
	
	scanf("%u", &a);
	
		for(j=0; j<20 ;j++){
			i[j]= a%2;
			temp= a/2;
			a=temp;
			}
		
		
		for(j=19; j >= 0 ;j--)
		printf("%u", i[j]);
	
	return 0;
} 
