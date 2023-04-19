#include<stdio.h>
int main(){
	int n;
	printf("How many studen:\n");
	scanf("%d",&n);
	int marks[10];
	int sum=0;
	int avg;
	int i;
	int max=-99999;
	int min=99999;
	for(i=0;i<n;i++){
		printf("Enter number\n");
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
		avg=sum/n;
		if(max<marks[i]){
			max=marks[i];
		}
		if(min>marks[i]){
			min=marks[i];
		}
		
	}
	printf("Average of all number is:%d\n",avg);
	printf("%d is max number\n",max);
	printf("%d is min number\n",min);
	return 0;
}
