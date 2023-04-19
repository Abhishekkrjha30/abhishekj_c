//wap to find addition of first 10 odd number.
#include<stdio.h>
int main(){
	int i=1;
	int add=0;
	while(i<=10){
		if(i%2!=0){
			add=add+i;
		}
		i=i+1;
	}
	printf("sum is:%d",add);
	return 0;
}
