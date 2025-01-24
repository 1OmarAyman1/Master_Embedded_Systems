/*
 * main.c
 *
 *  Created on: Jan 23, 2025
 *      Author: compu marts
 */
#include "stdio.h"
void main()
{
	char x;
	printf("enter a letter to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &x);
	if(x == 'a'|| x== 'A' || x=='e' || x == 'E' || x == 'I' || x == 'i' || x == 'O' || x == 'o' || x == 'u' || x == 'U')
	{
		printf("the letter is vowel \n");
	}
	else
	{
		printf("the letter is constant \n");
	}
}

