/*
 * main.c
 *
 *  Created on: Jan 23, 2025
 *      Author: compu marts
 */
#include "stdio.h"
void main()
{
	int x , y , z;
	printf("enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d %d" ,&x , &y , &z );
	if(x>y && x>z)
	{
		printf("the greatest number is %d ", x);

	}
	else if(y>x && y>z)
	{
		printf("the greatest number is %d ", y);
	}
	else
	{
		printf("the greatest number is %d ", z);
	}
}

