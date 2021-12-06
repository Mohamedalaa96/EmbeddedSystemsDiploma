/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed Alaa
 */


#include <stdio.h>
#include <stdlib.h>

int getPrimeNumbers(int start, int end, int * ArrayOfPrimeNumbers){
	int i=0,j=0,isPrime=1, arrayIndex=0;
	for (i =start; i < end ; i ++, isPrime = 1){
		for (j = 2 ; j < i ; j++){
			if ( i % j == 0){
				isPrime = 0;
				break;
			}

		}
		if (isPrime == 1){
			ArrayOfPrimeNumbers[arrayIndex++]= i;
		}
	}
	return arrayIndex;

}
int main(){
	fflush(stdout);
	printf("Enter two numbers(intervals): \n");
	fflush(stdout);
	int start = 10,end= 30;
	int arrayOfNumbers[100]={0};
	scanf("%d",&start);
	scanf("%d",&end);
	printf("Prime numbers between 10 and 30 are:: ");
	/* Call the function */
	int count = getPrimeNumbers(start,end,arrayOfNumbers);

	/* Print these numbers */
	int i;
	for (i =0 ; i < count ; i++){
		printf("%d ",arrayOfNumbers[i]);
	}

	return 0;
}
