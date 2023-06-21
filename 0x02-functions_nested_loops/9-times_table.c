#include <stdio.h>
#include "main.h"
/**
 * times_table - make time table
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (j == 0)
				printf("%d", i * j);
			else if (r < 10 && j != 0)
				printf(",  %d\n", i * j);
			else if (r >= 10)
				printf(", %d,  ", i * j);
		}
		putchar(10);
	}
}
