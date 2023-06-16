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
		putcahr(j);
		j++;
	}
	while (i < 100)
	{
		putchar(i);
		i++;
	}
	putcahr(10);
	return (0);
}
