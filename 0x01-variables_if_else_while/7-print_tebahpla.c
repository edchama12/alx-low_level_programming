#include <stdio.h>
/**
 * main - start point
 * Return: 0 if success
 */
int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
