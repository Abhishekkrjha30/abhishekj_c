#include<stdio.h>
int main(){
	int n,i,j;   int a=1;
	printf("enter number.\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",a);
		
		}
		printf("\n");
			a++;
	}
	return 0;
}
