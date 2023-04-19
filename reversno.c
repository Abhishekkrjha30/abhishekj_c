//wap to reverse a given number. ex= *input= 123   *output= 321.
#include <stdio.h>
int main(){
	int n;   int  rev =0;
	printf(" Enter 3 digit number\n");
	scanf("%d",&n);
	int rem=0;
	  
	while(n!=0){
		
	    	rem=n%10;
	    	rev=rev*10+rem;
	    	n=n/10;
		}
	    	printf("Reverse number is:%d",rev);
	    	
	     	return 0;
}
