/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed Alaa
 */


#include <stdio.h>
#include <stdlib.h>

int getPower(int number, int power){
	if ( power > 1)
		return number * getPower(number,power-1);
	else
		return number;

}
int main(){
	fflush(stdout);
	printf("Enter the base number: \n");
	fflush(stdout);
	int number = 0, power =0;
	scanf("%d",&number);
	printf("Enter the power number (positive integer): \n");
	fflush(stdout);
	scanf("%d",&power);

	printf("%d ^ %d",number,power);
	/* Call the function */
	int result = getPower(number,power);

	printf("= %d",result);

	return 0;
}
