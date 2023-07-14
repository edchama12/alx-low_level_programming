#include "main.h"
/**
 * *_memset - fills memory with constant bits
 * @s: memory area
 * @b: char to copy
 * @n: number of time 
 * Retutn: pointer to the area in memory
 */
char *memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
