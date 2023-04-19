//wap to take auser input n and print odd or even from one to n.
#include<stdio.h>
int main(){
	int n;
	printf("Enter your number\n");
	scanf("%d",&n);
	
//	while(i<=n){
   for(int i=1; i<=n; i++){

		if(i%2==0){
			printf("%d is even number\n",i);
		}
		else{
			printf("%d is odd number\n",i);
		}
		
	}
	//	}
	//	i=i+1;
	
	return 0;
}
