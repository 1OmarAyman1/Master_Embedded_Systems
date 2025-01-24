/*
 * main.c
 *
 *  Created on: Jan 23, 2025
 *      Author: compu marts
 */
#include "stdio.h"
void main()
{
	int x;
	printf("enter a number to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &x);
	if(x%2 == 0)
	{
		printf("the number is even \n");
	}
	else
	{
		printf("the number is odd \n");
	}
}

