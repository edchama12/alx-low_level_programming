#include <stdio.h>
/**
 * main - start point
 * Return: 0 if sucess
 */
void print_alphabet()
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
}
int main(void)
{
	print_alphabet();
	return (0);
}	
