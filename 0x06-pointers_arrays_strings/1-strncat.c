#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - concate function
 * @dest: first string argument
 * @src: second string argument
 * @n: number of bytes
 * Return: concatanet string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
