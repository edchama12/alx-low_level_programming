#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - write the caracter to std out
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
