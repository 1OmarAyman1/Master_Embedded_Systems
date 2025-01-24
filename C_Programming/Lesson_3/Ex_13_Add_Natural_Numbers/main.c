/*
 * main.c
 *
 *  Created on: Jan 24, 2025
 *      Author: compu marts
 */
#include"stdio.h"
void main()
{
	int x , sum = 0 , i;
	printf("enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d" , &x);
	for(i = 1 ; i<=x ; i++)
	{
		sum += i;
	}
	printf("sum = %d" , sum);
}

