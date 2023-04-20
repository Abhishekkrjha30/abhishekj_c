#include<stdio.h>
int main(){
	int a;
	printf("array size.\n");
	scanf("%d",&a);
	int n[a],i,sum=0;
   for(i=0;i<a;i++){
   	scanf("%d",&n[i]);
   	
   	sum=sum+n[i];
   }
   printf("the sum :%d",sum);	
	
	
	return 0;
}
