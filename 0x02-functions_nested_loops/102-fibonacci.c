#include <stdio.h>
/**
 * main - strat point fibonacci numbers 
 * Return: 0 if sucess
 */
int main(void)
{
	int cpt;
	int n1, n2, fin;

	n1 = 1;
	n2 = 2;
	printf("%d, %d", n1, n2);
	for (cpt = 0; cpt < 48; cpt++)
	{
		fin = n1 + n2;
		printf(", %d", fin);
		n1 = n2;
		n2 = fin;
	}
	printf("\n");
	return (0);
}
