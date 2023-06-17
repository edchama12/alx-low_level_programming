#include <stdio.h>
/**
 * main - start point
 * Return: 0 if sucess
 */
int main(void)
{
	int i, j;

	i = 97;
	j = 48;
	while (j < 58)
	{
		putchar(j);
		j++;
	}
	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
