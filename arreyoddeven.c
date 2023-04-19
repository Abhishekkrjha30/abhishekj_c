#include<stdio.h>
int main(){
	int a;
	printf("Enter how many user:\n");
	scanf("%d",&a);
	int n[10];
	int i;
	for(i=0;i<a;i++){
		printf("Enter number:\n");
		scanf("%d",&n[i]);
		if(n[i]%2==0){
			printf("the even no. sum:%d\n",n[i]+2);
		}
		if(n[i]%2!=0){
			printf("the odd no. sum:%d\n",n[i]+1);	
		}
	}
	return 0;
}
