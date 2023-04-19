#include<stdio.h>
int main(){
	char t;
	scanf( "%c",&t);
	switch( t){
		case 'R':
	case 'r':
	printf("stop");
	break;
	case 'Y':
	case 'y':
		printf("wait");
		break;
		case 'G':
    case 'g':
    	printf("go");
    	break;
    default:
    	printf("invalid");
    }
    return 0;	
}
