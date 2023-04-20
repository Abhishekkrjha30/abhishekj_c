#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter numbers.\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&b>c){
		printf("%d is max",a);
	}
	else if(b>a&&b>c){
			printf("%d is max",b);
	}
	else{
			printf("%d is max",c);
	}
	
	return 0;
}
