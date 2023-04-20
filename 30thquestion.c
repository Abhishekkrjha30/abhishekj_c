#include<stdio.h>
int main(){
	int a,b,i,j;
	printf("row?\n");
	scanf("%d",&a);
		printf("column?\n");
	scanf("%d",&b);
   int n[a][b];
   
   for(i=0;i<a;i++){
   	for(j=0;j<b;j++){
   		scanf("%d",&n[i][j]);
	   }
   }
   int sum=0;
   for(i=0;i<a;i++){
   	for(j=0;j<b;j++){
   	if(i==j){
   		sum=sum+n[i][j];
	   }
	   }
   }
   printf("the sum:%d",sum);
return 0;
}
