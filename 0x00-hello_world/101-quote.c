#include <stdio.h>
/**
 * main -start point
 * Return : 1
 */
int main(void)
{
	char ch[60]="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for(int i=0 ; i<=60 ; i++)
	{
		putchar(ch[i]);
	}
	putchar(10);
	return (1);
}
