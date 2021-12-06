/*
 * main.c
 *
 *  Created on: Oct 27, 2021
 *      Author: Mohamed Alaa
 */


#include <stdio.h>
#include <stdlib.h>

void Reverse(){

    char temp;

    scanf("%c",&temp);

    /* Check for the end of String */
    if (temp != '\n'){
        Reverse();
        /* after finishing return and pop all this values from
         * stack and continue the called functions execution!
         */
        printf("%c",temp);
    }
}
int main(){
	fflush(stdout);
	printf("String you want to reverse: \n");
	Reverse();

	return 0;
}
