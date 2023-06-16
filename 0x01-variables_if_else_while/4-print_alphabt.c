#include <stdio.h>
/**
 * main - start point
 * Return: 0 if succes
 */
int main(void)
{
        int j;

        j = 97;
        while (j < 123 && j != 101 && j != 113)
        {
                putchar(j);
                j++;
        }
        putchar(10);
        return (0);
}
