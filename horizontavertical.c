#include <stdio.h>
int main(){
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	int i=1;
		printf("   ");
	//for(int i=1;i<=n;i++){
	while(i<=n){
		
		int j=1;
		
		//for(int j=1;j<=n;j++){
		while(j<=i){                                          
		
			printf("*");
			j=j+1;
			
		}
		
		printf("\n");
		
		i=i+1;
		
	}
		
	return 0;
}
