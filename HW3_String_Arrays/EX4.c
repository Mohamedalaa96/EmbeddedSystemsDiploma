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
	int matrix[10];
	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%s",buffer);
	int elements = atoi(buffer);

	/*scan and get the data from user */
	int i=0;
	for (i =0 ; i < elements ; i++){
		scanf("%d",&matrix[i]);
	}
	printf("Enter Element to be inserted: ");
	fflush(stdout);
	int element, location;
	scanf("%d",&element);
	printf("Enter the location:");
	fflush(stdout);
	scanf("%d",&location);

	/* get zero starting index */
	location--;

	/* shift to the right starting from the insertion location*/
	for (i =elements ; i >= location ; i--){
		matrix[i+1]= matrix[i];

	}
	matrix[location] = element;

	/* Print the new Matrix */
	for (i =0 ; i < elements+1 ; i++){
			printf("%d ",matrix[i]);
		}

	return 0;
}
