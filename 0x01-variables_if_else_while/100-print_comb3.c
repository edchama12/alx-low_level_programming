#include <stdio.h>
/**
 * main - start point
 * Return: 0 if suceess
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
