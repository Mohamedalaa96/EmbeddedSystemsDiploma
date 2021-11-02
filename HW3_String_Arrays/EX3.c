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
	char buffer[20];
	float matrix[10][10],transpose[10][10] ;
	printf("Enter the Rows and column of matrix:");
	fflush(stdout);
	scanf("%s",buffer);
	int rows = atoi(buffer);
	scanf("%s",buffer);
	int columns = atoi(buffer);
	int i,j;

	/* Validate Inputs*/
	if (!(rows > 0 && columns > 0 && rows < 11 && columns < 11)){
		printf("Invalid Matrix Dimensions\n");
		return 0;
	}
	/*scan and get the data from user */
	for (i = 0 ; i < rows; i++){
		for (j =0 ; j < columns ; j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);
			fflush(stdin);
			scanf("%s",buffer);
			matrix[i][j] = atof(buffer);
		}
	}

	/* transpose */
	for (i = 0 ; i < rows; i++){
		for (j =0 ; j < columns ; j++){
			transpose[j][i]= matrix[i][j] ;
		}
	}

	/* print the two matrices */
	printf("Entered Matrix:\n");
	for (i = 0 ; i < rows; i++){
		for (j =0 ; j < columns ; j++){
			printf("%.2f	",matrix[i][j]) ;
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");
	for (i = 0 ; i < columns; i++){
		for (j =0 ; j < rows ; j++){
			printf("%.2f	",transpose[i][j]) ;
		}
		printf("\n");
	}



	return 0;
}
