#include <stdio.h>
/**
 * main - start point print arguments
 * @argc: number of line
 * @argv: array list of argument
 * Return: 0 if succes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
