#include <stdio.h>
int main(){
	int n,i;
	printf("enter number.\n");
	scanf("%d",&n);
	int sum=1;
	for(i=1;i<=n;i++){
		sum=sum*i;
	}
	printf("the factorial:%d",sum);
	return 0;
}
