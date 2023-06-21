#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Print n times table
 * @n: intger argument
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if ( j == 0)
					printf("%d", i * j);
				else if (r < 10 && j != 0)
					printf(",   %d", i * j);
				else if (r >= 10 && r <= 99)
					printf(",  %d", i * j);
				else if (r >= 100)
					printf(", %d", i * j);
			}
			putchar(10);
		}
	}
}
