#include<stdio.h>
void fibonacci(int n){
	
	int a=0; 
	int b=1; int c,i;
	for( i=3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	
		printf("%dth fibonacci is %d",n,c);
	
}
int main(){
	int i;
	for(i=1;i<=20;i++){
	
	int n;
	printf("Enter number?\n");
	scanf("%d",&n);
	
  if(n==1){
			printf("%dth fibonacci is 0",n);
	}
else if(n==2){
			printf("%dth fibonacci is 1",n);
	}else{
	
	fibonacci(n);}
	printf("\n\n");
}
	return 0;
}
