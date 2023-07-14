#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - copie a string
 * @dest: first string argument
 * @src: second string argument
 * @n: intger argument
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
