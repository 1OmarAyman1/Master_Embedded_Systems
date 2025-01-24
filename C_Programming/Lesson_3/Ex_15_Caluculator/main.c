/*
 * main.c
 *
 *  Created on: Jan 24, 2025
 *      Author: compu marts
 */

#include "stdio.h"
void main()
{
	float x , y;
	char operator;
	printf("enter two numbers");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f" , &x , &y );
	printf("enter operator");
	fflush(stdin);
	fflush(stdout);
	scanf("%c" , &operator);
	switch(operator)
	{
		case '+':
			printf("result= %f \n" , x+y);
			break;
		case '-':
			printf("result= %f \n" , x-y);
			break;
		case '*':
			printf("result= %f \n" , x*y);
			break;
		case '/':
			printf("result= %f \n" , x/y);
			break;
		default:
			printf("enter a valid operator \n");
	}
}



