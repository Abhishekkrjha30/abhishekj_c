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
   
   int m[a][b];
    for(i=0;i<a;i++){
   	for(j=0;j<b;j++){
   		scanf("%d",&m[i][j]);
	   }
   }
   int sum;
    for(i=0;i<a;i++){
   	for(j=0;j<b;j++){
   		sum=n[i][j]+m[i][j];
   		 printf("the sum:%d",sum);
	   }
printf("\n")	 ;  
}
	  
  
  
	return 0;
}
