#include<stdio.h>
int main(){
		int a;
	printf("array size.\n");
	scanf("%d",&a);
	float min=99999999;
	float n[a];   int i;
   for(i=0;i<a;i++){
   	scanf("%f",&n[i]);
   	if(min>n[i]){
   		min=n[i];
	   }
   }
   printf("the min number :%.1f",min);	

	return 0;
}
