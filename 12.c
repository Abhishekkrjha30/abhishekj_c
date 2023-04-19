#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=1;
	int a=1;
	while(i<=n){
		int j=1;
		
		while(j<=n){
			if(a%2==0){
			printf("E");
			}
		else{
			printf("O");
	    	}
	a=a+1;
	
		j=j+1;
			
		
	}
	printf("\n");
		i=i+1;
	}
	return 0;
}
