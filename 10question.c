#include<stdio.h>
int main(){
		int a;
	printf("array size.\n");
	scanf("%d",&a);
	int n[a],i,sum=0;
	int e=0,o=0;
   for(i=0;i<a;i++){
   	scanf("%d",&n[i]);
   	if(n[i]%2==0){
   		e=e+1;
	   }
	   else{
	   	o=o+1;
	   }
   }
   printf("total even number:%d\n",e);	
printf("total odd number:%d",o);
	return 0;
}
