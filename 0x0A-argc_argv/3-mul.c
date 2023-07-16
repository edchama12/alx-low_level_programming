#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: multiplies two numbers
 * @argv: array list
 * Return: 0 if succer 1 if error
 */
int main(int argc, char *argv[])
{
	int N1, N2, MUL;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	N1 = atoi(argv[1]);
	N2 = atoi(argv[2]);
	MUL = N1 * N2;
	printf("%d\n", MUL);
	return (0);
}

