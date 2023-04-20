#include<stdio.h>
int main(){
	int d,i;
	printf("enter distance.\n");
	scanf("%d",&d);
	int f=5;
	if(d>0){
	for(i=1;i<d;i++){
		f=f+2;
	}
	printf("total fare is :%d",f);
}
else{
	printf("unvalid number.");
}
	return 0;
}
