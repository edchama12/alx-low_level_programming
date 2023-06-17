#include <stdio.h>
/**
 * main - start point
 * Return: 0 if sucess
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar(10);
	return (0);
}
