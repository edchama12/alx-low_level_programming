#include <stdio.h>
#include "main.h"

/**
 * more_numbers - write from 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(j);
