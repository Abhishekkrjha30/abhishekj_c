#include<stdio.h>
int main(){
	int a;
	printf("enter number.\n");
	scanf("%d",&a);
	int i,sum=0;
	for(i=1;i<=a;i++){
		sum=sum+i;
	}
	printf("the sum:%d",sum);
	
	return 0;
}
