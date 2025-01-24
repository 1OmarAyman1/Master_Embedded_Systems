/*
 * main.c
 *
 *  Created on: Jan 22, 2025
 *      Author: compu marts
 */
#include "stdio.h"
void main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c" , &x);
	printf("ASCII value of %c = %d" , x , x);
}

