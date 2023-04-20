#include<stdio.h>
int main()
{
	int a;
	printf("array size.\n");
	scanf("%d",&a);
	int max=-99999999;
	int n[a],i;
   for(i=0;i<a;i++){
   	scanf("%d",&n[i]);
   	if(max<n[i]){
   		max=n[i];
	   }
   }
   printf("the max number :%d",max);	

	
	
	return 0;
}
