#include<stdio.h>
int main(){
		int a;
	printf("array size.\n");
	scanf("%d",&a);
	int n[a],i,sum=0;
	int e=0,o=0;
   for(i=0;i<a;i++){
   	scanf("%d",&n[i]);
   	if(i%2==0){
   		e=e+n[i];
	   }
	   else{
	   	o=o+n[i];
	   }
   }
   int d=e-o;
   printf("%d is sum of even index.\n%d is dum of odd index.\n%d is the difference between even and odd index. ",e,o,d);
	return 0;
}

