#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _atoi - convert a string to intger
 * @s: char to convert
 * Return: the intger
 */
int _atoi(char *s)
{
	int sg = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			sg *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while ( *s++);
	return (n * sg);
}
