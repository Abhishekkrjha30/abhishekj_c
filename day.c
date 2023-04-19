#include<stdio.h>
int main(){
	int n;
	printf("please enter 1 to 7 number\n");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("Monday");
			break;
		case 2:
		   printf("Tuesday");
		   break;
		case 3:
		  printf("wednesday");
		  break;
		case 4:
		  printf("thursday");
		  break;
		case 5:
		printf("friday");
		break;
		case 6:
		  printf("saturday");
		  break;
		case 7:
			printf("sunday");
			break;
	    default:
	    	printf("plsease enter valid number");
		   
	}
	return 0;
}
