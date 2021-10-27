#include "stdio.h"

void main(){
	int a, b;
	printf("Enter the first Number: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter the second Number: ");
	fflush(stdout);
	scanf("%d",&b);
	a = b +a ;
	b =  a -b ;
	a = a -b;
	printf("\n1st Number: %d \n2nd Number:%d", a,b);

}