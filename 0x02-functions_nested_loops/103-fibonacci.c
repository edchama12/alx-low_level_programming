#include <stdio.h>
/**
 * main - start point
 * Return: 0 if suecce
 */
int main(void)
{
	int cpt;
	long int n1, S, n2, fin;

	n1 = 2;
	n2 = 8;
	S = 0;
	for (cpt = 0; cpt < 4000000; cpt++)
	{
		fin = n1 + n2;
		if (fin % 2 == 0)
			S = S + fin;
		n1 = n2;
		n2 = fin;
	}
	putchar(10);
	return (0);
}
