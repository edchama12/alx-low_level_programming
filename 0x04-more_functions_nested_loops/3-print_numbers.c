#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar(10);
}