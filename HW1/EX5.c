#include "stdio.h"

void main(){
	char userInput;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&userInput);
	printf("ASCII value of %c: %d",userInput,userInput);
}