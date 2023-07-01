#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - concatenate to string
 * @dest: first string argument
 * @src: second string argument
 * Return: string concatnate
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
