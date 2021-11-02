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
	printf("Enter Element to be searched: ");
	fflush(stdout);
	int element,location = -1;
	scanf("%d",&element);

	/* shift to the right starting from the insertion location*/
	for (i =0 ; i < elements ; i++){
		if (matrix[i] == element){
			printf("Number found at the location = %d", i+1);
			location = i;
			break;
		}


	}
	if ( location == -1 )
		printf("Number not found!");

	return 0;
}
