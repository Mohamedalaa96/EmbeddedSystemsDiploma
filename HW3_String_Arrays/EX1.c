/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
	/* to test two numbers for quick demonstration only */
	float mat1[2][2];
	float mat2[2][2];
	char buffer[20];
	printf("Enter the elements of 1st Matrix\n");

	/* Scan array 1 */
	printf("Enter a11: ");
	fflush(stdout);
	scanf("%s",buffer);
	mat1[0][0] = atof(buffer);
	printf("Enter a12: ");
	fflush(stdout);
	scanf("%s",buffer);
	mat1[0][1] = atof(buffer);
	printf("Enter a21: ");
	fflush(stdout);
	scanf("%s",buffer);
	mat1[1][0] = atof(buffer);
	printf("Enter a22: ");
	fflush(stdout);
	scanf("%s",buffer);
	mat1[1][1] = atof(buffer);
	fflush(stdout);

	/* Scan array 2 */
	printf("Enter the elements of 2nd Matrix\n");

	printf("Enter b11: ");
	fflush(stdout);
	scanf("%s",buffer);
	mat2[0][0] = atof(buffer);
	printf("Enter b12: ");
	fflush(stdout);
	scanf("%s",buffer);
	mat2[0][1] = atof(buffer);
	printf("Enter b21: ");
	fflush(stdout);
	scanf("%s",buffer);
	mat2[1][0] = atof(buffer);
	printf("Enter b22: ");
	fflush(stdout);
	scanf("%s",buffer);
	mat2[1][1] = atof(buffer);
	fflush(stdout);

	/** Sum of Arrays */
	printf("Sum Of Matrix:\n ");
	printf("%.1f " , mat1[0][0] + mat2[0][0]);
	printf("%.1f " , mat1[0][1] + mat2[0][1]);
	printf("\n%.1f ",mat1[1][0] + mat2[1][0]);
	printf("%.1f " , mat1[1][1] + mat2[1][1]);



	return 0;
}
