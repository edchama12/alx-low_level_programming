#include <stdio.h>
/**
 * main - start point
 * Return: 0 if succes
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		if (i != 101 && i != 113)
			putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
