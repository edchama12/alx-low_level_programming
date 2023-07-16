#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: multiplies two numbers
 * @argv: array list
 * Return 0 if succer 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (argv[1] * argv[2]));
		return (0);
	}
}
