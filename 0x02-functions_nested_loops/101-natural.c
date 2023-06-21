#include <stdio.h>
/**
 * main - programe return multiples of 3 and 5
 * Return: 0 if succes
 */
int main(void)
{
	int S, i;

	S = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			S = S +i;
	}
	printf("%d\n", S);
	return (0);
}
