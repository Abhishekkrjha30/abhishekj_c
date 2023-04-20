#include<stdio.h>
int main(){
		int a,j;
	printf("array size.\n");
	scanf("%d",&a);
	int n[a],i,sum=0;
   for(i=0;i<a;i++){
   	scanf("%d",&n[i]);
   }
    for(i=0;i<a;i++){
    	for(j=i+1;j<a;j++){
		if(n[i]>n[j]){
   	int temp=n[i];
   	n[i]=n[j];
   	n[j]=temp;
   }
   }}
   	printf("assending order:\n");
  for(i=0;i<a;i++){
  	printf("%d,",n[i]);
  }	

	return 0;
}
