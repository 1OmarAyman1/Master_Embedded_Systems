/*
 * main.c
 *
 *  Created on: Jan 22, 2025
 *      Author: compu marts
 */
#include "stdio.h"
void main()
{
	int x , y;
	printf("enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &x,&y);
	printf("sum: %d", x+y);

}

