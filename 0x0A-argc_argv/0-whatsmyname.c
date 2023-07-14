#include <stdio.h>
/**
 * main - start point
 * @argc: number of command line
 * @argv: array list all argument
 * Return: 0 if it work
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
