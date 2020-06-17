#include <stdio.h>

int main()
{
	int composite[201];
	int i,j=2,n;
	
	scanf("%d",&n);
	
	for(i=2;i<=n;i++){
		composite[i]=0;
	}
	
	while(j*j<=n){		
		while(composite[j]==1)	j++;
		
		for(i=2*j; i<=n; i+=j)	composite[i]=1;
		
		j++;
	}
	 
	for(i=2;i<=n;i++){
		if	(composite[i]==0){
		printf("%d\n",i);
	}
}
