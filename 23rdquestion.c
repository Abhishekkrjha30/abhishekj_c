#include <stdio.h>
int main(){
	int n,t;   int sum=0;
	printf("enter number.\n");
	scanf("%d",&n);
	int a=n;  
	int b=n;
	int rem;
	int count=0;
	while(b!=0){
		count=count+1;
		b=b/10;
	}
	printf("%d count\n",count);
	while(a!=0){
		int s=1;
		rem=a%10;
		 t=rem;
		 while(count>=1){
		 
		 s=s*rem;
		 count=count-1;
		  printf("%d\n",s);
		 }
		 sum=sum+t;
		 a=a/10;
		
	}
	if(n==sum){
		printf("this is armstrong number.");
	}
	else{
				printf("this is not armstrong number.");

	}
	return 0;
}
