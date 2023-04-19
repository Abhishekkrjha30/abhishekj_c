#include<stdio.h>
int main(){
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		int j=1;
		int k=i;
		
		while(j<=n){
			if(k%2==0){
			
			printf("*");
		}
		else{
			printf("#");
		}
		k++;
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}
	return 0;
}
