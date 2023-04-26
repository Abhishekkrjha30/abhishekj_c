#include<stdio.h>
int main(){
	int a,i;   int b=1; int c=1;
	printf("enter number.\n");
	scanf("%d",&a);
	int d=a;
	for(i=1;i<=a;i++){
		if(c<=d){
			printf(" ");
			c++;
			i--;
		}
		else if(b<=i){
			printf("* ");
			b++;
			i--;
		}
		else{
		printf("\n");
		b=1;
		c=1;
		d--;
		}
	}
	return 0;
}
