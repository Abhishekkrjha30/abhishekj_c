#include <stdio.h>
int main (){

	int n;
	printf("enter number\n");
	scanf("%d",&n);
	int i=1;
	
	
	
	while(i<=n){
		int j=1;
		printf("%d",i );
		while(j<=n){
			printf("%d",j+1 );
				printf("\n");
			j=j+1;
		}
		printf("\n");
		i=i+1;
		
	}
	return 0;
}
