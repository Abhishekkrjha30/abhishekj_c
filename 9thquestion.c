#include<stdio.h>
int main(){
int a,i;
printf("enter number.\n");
scanf("%d",&a);
int b=a;
int rem,rev=0;
while(b!=0){
	rem=b%10;
	rev=rev*10+rem;
	b=b/10;	
}
if(a==rev){
	printf("%d is palindrome num.",a);
}
else{
	printf("%d is not palindrome num.",a);
}

return 0;
}
