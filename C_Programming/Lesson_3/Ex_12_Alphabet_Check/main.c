/*
 * main.c
 *
 *  Created on: Jan 23, 2025
 *      Author: compu marts
 */
#include "stdio.h"
void main()
{
	char x;
	printf("enter a character to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c" , &x);
	if((x >= 'a' && x <= 'z' ) || (x >= 'A' && x <= 'Z') )
	{
		printf("the character is in the alphabet \n");
	}
	else
	{
		printf("the character is not in the alphabet \n");
	}
}
