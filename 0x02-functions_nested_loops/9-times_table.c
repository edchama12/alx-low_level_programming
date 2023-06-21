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
			if (j != 9 && r >= 10 && r <= 99)
				printf("%d, ", i * j);
			else if (j == 9)
				printf("%d\n", i * j);
			else
				printf("%d,  ", i * j);
		}
	}
}
