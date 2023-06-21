#include <stdio.h>
/**
 * main - start point
 * return: 0 if succes
 */
int main(void)
{
	int cpt;
	long int n1, n2, fin;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (cpt = 0; cpt < 48; cpt++)
	{
		fin = n1 + n2;
		printf(", %ld", fin);
		n1 = n2;
		n2 = fin;
	}
	printf("\n");
	return (0);
}
