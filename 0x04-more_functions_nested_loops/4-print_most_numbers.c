#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers expect 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 52 && i != 50)
			putchar(i);
	}
	putchar(10);
}
