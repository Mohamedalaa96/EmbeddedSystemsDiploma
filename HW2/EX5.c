
/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed
 */


#include "stdio.h"


int main(){
	char input;
	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&input);
	if ((input >=  'a' && input <= 'z') || (input >= 'A' && input <= 'Z') )
		printf("%c is an alphabet.\n",input);
	else
		printf("%c is not an alphabet.\n",input);

	fflush(stdout);


	return 0;
}

