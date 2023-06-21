#include <stdio.h>
/**
 * main - start point
 * Return: 0 if suecce
 */
int main(void)
{
	int cpt;
	long int n1, S, n2, fin;

	n1 = 1;
	n2 = 2;
	S = 0;
	for (cpt = 0; cpt <= 4000000; cpt++)
	{
		fin = n1 + n2;
		n1 = n2;
		n2 = fin;
		if (n1 % 2 == 0)
			S = S + n1;
	}
	printf("%ld\n", S);
	return (0);
}
