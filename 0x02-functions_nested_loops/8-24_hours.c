#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - write time from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			a = i / 10;
			b = i % 10;
			c = j / 10;
			d = j % 10;
			printf("%d%d:%d%d\n", a, b, c, d);
		}
	}
}
