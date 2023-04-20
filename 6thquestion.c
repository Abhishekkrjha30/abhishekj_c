#include<stdio.h>
int main(){
	int n,i;
	printf("Enter number.\n");
	scanf("%d",&n);
	int a=1,b=1,sum=0;
	printf("fubonacci series.\n");
	printf("%d,%d",a,b);
	for(i=1;i<n-2;i++){
		sum=a+b;
	   a=b;
	   b=sum;
	    printf(",%d",sum);	
	  	}
	  	

	
	
	return 0;
}
