#include<stdio.h>
int main(){
	int a;
	printf("how many number:\n");
	scanf("%d",&a);
	int n[a];   int i;
	printf("Enter number:\n");
	for( i=0;i<a;i++){
		scanf("%d",&n[i]);
	}
	int d;
	printf("which number delete:\n");
	scanf("%d",&d);
		for( i=0;i<a;i++){
		/*	if(n[d-1]==n[i]){
			n[i]=n[i]-n[i];
			}*/
			if( n[i]!=n[d-1]){  //if(n[i]!=0)
			
			printf("%d",n[i]);}
				
	}
	return 0;
}
