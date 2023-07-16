#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument numbers
 * @argv: array of argument
 * Return: 1 if Error 0 if succes
 */
int main(int argc, char *argv[])
{
	int num, S = 0, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i <= argc - 1; i++)
		{
			if (argv[i] => 48 && argv[i] <= 57)
			{
				num = atoi(argv[i]);
				S += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
