/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed Alaa
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
	/* to test two numbers for quick demonstration only */
	float array[20];
	char buffer[100];
	printf("Enter the number of data:\n");
	fflush(stdout);
	printf("Enter number: ");
	scanf("%s",buffer);
	int n = atoi(buffer);
	int decrementing_counter = n;

	/* decrement then find if its not zero */
	do{
		scanf("%s",buffer);
		array[n-decrementing_counter] = atof(buffer);

	}while(--decrementing_counter != 0);

	int counter;
	float sum = 0;
	for (counter = 0; counter < n ; counter++){
		sum+= array[counter];
	}
	printf("Avarage = %.2f", (sum/n));
		return 0;
}
