/*
 * main.c
 *
 *  Created on: Jan 24, 2025
 *      Author: compu marts
 */
#include "stdio.h"
void main()
{
	int x , i , product = 1;
	printf("enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &x);
	for(i = 1 ; i<=x ; i++)
	{
		product*=i;
	}
	printf("product = %d" , product);
}

