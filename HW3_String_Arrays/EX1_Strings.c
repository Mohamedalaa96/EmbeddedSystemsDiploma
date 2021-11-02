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
    /* do the magic here , scan the char, then compair*/
	while (scanf("%c",&temp) && temp != '\n' && temp != '\r'){
		/* if its here a char, increment the counter for the next scan */
        matrix[i++] = temp;
	}
	matrix[i] = '\0';

	printf("Enter character to find frequency: ");
	fflush(stdout);
	char element;
	scanf("%c",&element);

	int j,f=0;
	/* search in matrix[j] == 0 , null terminator */
	for (j =0 ; matrix[j] ; j++){
		if (matrix[j] == element){
			f++;
		}
	}
	printf("Frequency of %c = %d",element,f);

	return 0;
}
