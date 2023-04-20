#include<stdio.h>
int main(){
	int s,d,a,ts;
	printf("youer salary.\n");
	scanf("%d",&s);
	printf("youer allowances.\n");
	scanf("%d",&a);
	printf("youer deductions.\n");
	scanf("%d",&d);
	ts=s-a-d;
	printf("your total salary:%d",ts);

	
}
