#include<stdio.h>.
int main(){
	int a,b;   int i,j;
	int max=-9999999; int min=9999999;
	printf("row?\n");
	scanf("%d",&a);
		printf("column?\n");
	scanf("%d",&b);
	int n[a][b];
	 for(i=0;i<a;i++){
   	for(j=0;j<b;j++){
   		scanf("%d",&n[i][j]);
   		if(max<n[i][j]){
   			max=n[i][j];
		   }
   		if(min>n[i][j]){
   			min=n[i][j];
		   }
   		
	   }
   }
   printf("max=%d",max);
      printf("min=%d",min);

   

	return 0;
}
