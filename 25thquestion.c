#include<stdio.h>
int main(){
	int n,rem;
	printf("enter number.\n");
	scanf("%d",&n);
	int sum=0;
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	if(sum%3==0){
		printf("multiple of 3");
	}
	else{
			printf(" not multiple of 3");
	}
	return 0;
}
