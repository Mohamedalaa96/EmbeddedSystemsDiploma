/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed
 */


#include "stdio.h"


int main(){
	char input;
	printf("\nEnter an alphabet:");
	fflush(stdout);
	scanf("%c",&input);
	switch (input){
	case 'a':case 'e':case 'i':
	case 'o': case 'u':case 'A':
	case 'E':case 'I':case 'O': case 'U':
		printf("%c is a vowel.\n",input);
		break;
	default:
		printf("%c is a consonant.\n",input);
		break;
	}

	fflush(stdout);


	return 0;
}
