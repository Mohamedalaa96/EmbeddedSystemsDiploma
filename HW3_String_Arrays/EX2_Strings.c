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
	char matrix[30];
	printf("Enter a string: ");
	fflush(stdout);
	char temp;
	int i=0;
	while (scanf("%c",&temp) && temp != '\n' && temp != '\r'){
		matrix[i++] = temp;
	}


	printf("Length of string: %d",i);


	return 0;
}
