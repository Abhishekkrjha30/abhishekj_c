#include<stdio.h>
int main(){
int n,i;
printf("enter number.\n");
scanf("%d",&n);
int x=0;
for(i=2;i<n;i++){
	if(n%i==0){
		x=1;
	}
}
if(x==0){
	printf("prime number.\n");
}
else{
	printf(" not prime number.\n");
}
return 0;
}
