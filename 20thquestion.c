#include<stdio.h>
int main(){
	int n,k,i;
	printf("enter number.\n");
	scanf("%d",&n);
	int x=0;
	for(i=2;i<n;i++){
		for(k=2;k<i;k++){
		if(i%k==0){
			x=1;
		}
}
if(x==0){
	printf(" %d prime number\n",i);
}
	}
	return 0;
}
