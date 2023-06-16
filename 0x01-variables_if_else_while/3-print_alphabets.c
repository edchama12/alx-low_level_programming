#include <stdio.h>
/**
 * main - start point
 * Return: 0 if succes
 */
int main(void)
{
	int i;
	int j;


	i = 65;
	j = 97;
	while (j < 123)
	{
		putchar(j);
		j++;
	}
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
