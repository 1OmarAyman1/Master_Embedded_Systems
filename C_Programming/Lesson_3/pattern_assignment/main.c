/*
 * main.c
 *
 *  Created on: Jan 22, 2025
 *      Author: Omar_Ayman
 */
#include "stdio.h"
void main()
{
	int i , j;
	for(i = 0 ; i <= 9 ; i++)
	{
		for(j = i ; j <= 9 ; j++)
		{
			printf("%d" , j);
		}
		printf("\n");
	}
}

