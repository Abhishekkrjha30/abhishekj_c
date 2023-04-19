#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g,h,i,j;
	printf("Enter your number:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	int n=((a+b+c+d+e+f+g+h+i+j)/10);
	printf("the avg. number=%d\n",n);
	
	if(a>b && a>c&&a>d && a>e&&a>f && a>g&&a>h && a>i&&a>j){
		printf("%d is max no.\n",a);
	}
	else if(b>c && b>d&&b>e && b>f&&b>g && b>h&&b>i && b>j){
		printf("%d is max no.\n",b);
	}
		else if(c>d && c>e&&c>f && c>g&&c>h && c>i&&b>j){
		printf("%d is max no.\n",c);
	}
		else if(d>e && d>f&&d>g && d>h&&d>i && d>j){
		printf("%d is max no.\n",d);
	}
	else if( e>f&&e>g && e>h&&e>i && e>j){
		printf("%d is max no.\n",e);
	}
		else if(f>g && f>h&&f>i && f>j){
		printf("%d is max no.\n",f);
	}
		else if( g>h&&g>i && g>j){
		printf("%d is max no.\n",g);
	}
	else if( h>i&& h>j){
		printf("%d is max no.\n",h);
	}
		else if( i>j){
		printf("%d is max no.\n",i);
	}

    else{
    	printf("%d is max no.\n",j);
	}

	if(a<b && a<c&&a<d && a<e&&a<f && a<g&&a<h && a<i&&a<j){
		printf("%d is min no.\n",a);
	}
	else if(b<c && b<d&&b<e && b<f&&b<g && b<h&&b<i && b<j){
		printf("%d is min no.\n",b);
	}
		else if(c<d && c<e&&c<f && c<g&&c<h && c<i&&b<j){
		printf("%d is min no.\n",c);
	}
		else if(d<e && d<f&&d<g && d<h&&d<i && d<j){
		printf("%d is min no.\n",d);
	}
	else if( e<f&&e<g && e<h&&e<i && e<j){
		printf("%d is min no.\n",e);
	}
		else if(f<g && f<h&&f<i && f<j){
		printf("%d is min no.\n",f);
	}
		else if( g<h&&g<i && g<j){
		printf("%d is min no.\n",g);
	}
	else if( h<i&& h<j){
		printf("%d is min no.\n",h);
	}
		else if( i<j){
		printf("%d is min no.\n",i);
	}

    else{
    	printf("%d is min no.\n",j);
	}

return 0;
}
