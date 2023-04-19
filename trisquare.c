#include<stdio.h>
int main(){
	int n;   int i,k,j;
	scanf("%d",&n);
	int a=n;
	
	for ( i=1;i<=a;i=i+2){
		
		for( k=a;k>=i;k--){
			printf(" ");
		}
		for( j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n");
		
	}
	int b=n;
		b=b-2;
	for ( i=1;i<=a;i=i+2){
		
		for( k=-1;k<=i;k++){
			printf(" ");
		}
		for( j=b;j>=i;j--){
			printf(" *");
		}
		printf("\n");
		
	}

	return 0;
}
