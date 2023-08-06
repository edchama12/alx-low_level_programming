#include <stdio.h>
/**
 * main - print the number of argument passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
