#include<stdio.h>
int main(){
	int a,i;   int b=1;
	printf("enter number.\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(b<=i){
			printf("*");
			b++;
			i--;
		}
		else{
		printf("\n");
		b=1;
		}
	}
	
	
	return 0;
}
