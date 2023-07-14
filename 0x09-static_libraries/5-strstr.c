#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strstr - lacates a substring
 * @haystack: first char argument
 * @needle: second char argument
 * Return: beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *rs;

	rs = strstr(haystack, needle);
	return (rs);
}
