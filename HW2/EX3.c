
/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed
 */


#include "stdio.h"


int main(){
	float a,b,c, largest;
	printf("Enter three numbers:");
	fflush(stdout);
	scanf("%f \n %f \n %f",&a,&b,&c);
	/* scanf("%f",&a);
	 scanf("%f",&a); */
	if (a >= b && a >= c){
		largest = a;
	}
	else if (b >= a && b >= c )
		largest= b;
	else
		largest = c;
	printf("Largest number = %f",largest);
	fflush(stdout);


	return 0;
}

