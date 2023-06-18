#include <stdio.h>
/**
 * main - start point
 * Return: 0 if sucess
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
