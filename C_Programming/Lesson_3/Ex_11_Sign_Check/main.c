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
	printf("entar a number to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &x);
	if(x==0)
	{
		printf("you entered zero");
	}
	else if(x>0)
	{
		printf("you entered a positive number");
	}
	else
	{
		printf("you entered a negative number");
	}
}

