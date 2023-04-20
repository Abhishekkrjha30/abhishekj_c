#include<stdio.h>
int main(){
		int a,i;
	printf("array size.\n");
	scanf("%d",&a);
	float n[a],sum=1;
   for(i=0;i<a;i++){
   	scanf("%f",&n[i]);
   	
   	sum=sum*n[i];
   }
   printf("the product :%f",sum);	

	return 0;
}

