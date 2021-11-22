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
	printf("Enter the string: ");
	fflush(stdout);
	char temp;
	int i=0;
	while (scanf("%c",&temp) && temp != '\n' && temp != '\r'){
		matrix[i++] = temp;
	}
	int k, j;
	for (k =0, j = i-1; k < i/2  ; k++, j--){
		temp = matrix[k];
		matrix[k] = matrix[j];
		matrix[j] = temp;
	}
	matrix[i] = '\0';
	printf("Reversed string is: %s",matrix);


	return 0;
}

int a[rows][columns] = {
	{1,2,3,4,5,5,6,6,2},
	{2,3,2,2,2,2,2,2,1},
	{1,4,1,2,1,2,1,2,1}
}
