#include<stdio.h>
int main(){
		int a;
	printf("array size.\n");
	scanf("%d",&a);
	int max=-99999999,smax=-99999999;
	int min=9999999,smin=9999999;
	int n[a],i,sum=0;
   for(i=0;i<a;i++){
   	scanf("%d",&n[i]);
   	if(max<n[i]){
   		smax=max;
   		max=n[i];
	   }
 else if(smax<n[i]&&max!=n[i]){
 	smax=n[i];
 }
 	if(min>n[i]){
   		smin=min;
   		min=n[i];
	   }
 else if(smin>n[i]&&min!=n[i]){
 	smin=n[i];
 }
   }
   printf("the  second max number :%d\n",smax);	
   printf("the second min number :%d",smin);

	return 0;
}
