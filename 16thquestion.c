#include<stdio.h>
int main(){
		int a,i;
	printf("array size.\n");
	scanf("%d",&a);
	float n[a],sum=1;
   for(i=0;i<a;i++){
   	scanf("%f",&n[i]);
   	
   	sum=sum+n[i];
   }
   float avg=sum/a;
   printf("the average of this array :%.2f",avg);	

	return 0;
}

