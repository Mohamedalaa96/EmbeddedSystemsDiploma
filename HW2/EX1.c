/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed
 */


#include "stdio.h"

void checkEven(void){
	int num;
	printf("\nEnter an integer you want to check:");
	fflush(stdout);
	scanf("%d",&num);
	if ( num %2 == 0)
		printf("%d is even.",num);
	else
		printf("%d is odd.",num);
}
int main(){
	/* to test two numbers for quick demonstration only */
	checkEven();
	checkEven();

	return 0;
}

