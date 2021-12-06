/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed Alaa
 */


#include <stdio.h>
#include <stdlib.h>

int getFactorial(int number){
	if ( number > 2)
		return number * getFactorial(number-1);
	else
		return number;

}
int main(){
	fflush(stdout);
	printf("Enter two numbers: \n");
	fflush(stdout);
	int number = 0;
	scanf("%d",&number);
	printf("Factorial of %d is: ",number);
	/* Call the function */
	int result = getFactorial(number);

	printf("%d ",result);

	return 0;
}
