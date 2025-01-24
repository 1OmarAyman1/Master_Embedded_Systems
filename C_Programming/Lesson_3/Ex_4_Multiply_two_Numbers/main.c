/*
 * main.c
 *
 *  Created on: Jan 22, 2025
 *      Author: compu marts
 */
#include "stdio.h"
void main()
{
	float x , y;
	printf("Enter two numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f" , &x ,&y);
	printf("Product: %f" ,x*y);

}

